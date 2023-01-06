#include <iostream> //meliputi Include iostream, maksudnya adalah untuk memasukkan perintah perintah yang ada didalam iostream, seperti int, print, dst. Iostrem juga untuk bahasa C++//
#include <iomanip> //agar setw bisa berjalan//
using namespace std; //kita memasukkan std(standard) kepada namespace//

struct node //untuk menampung node yang ada di dalamnya seperti int data, beserta node yang beralamat selanjutnya atau sekarang//
{
int data;
node *next;
};

//deklarasi node dari struct diatas//
node *head;
node *tail;
node *curr;
node *entry;
node *del;


void inisialisasi() //inisialisasi adalah blok code yang akan dieksekusi pada program yang ada didalam kurung kurawal dengan void yang tidak akan mengembalikan nilai apapun//
{
  //deklarasi node untuk beberapa keperluan//
  head = NULL;
  tail = NULL;
  }

void input(int dt) //disini kita diberi tau bahwa input sbagai blok code nya dan di dalam blok code itu memiliki sebuah data atau dinamakan dengan int dt yang dimana isi itu fungsinya tidak akan mengembalikan nilai//
{
  entry = (node* )malloc(sizeof(node)); //entry mendapat alamat baru dan malloc digunakan untuk menyesuaikan jumlah memori yang akan dipakai//
  entry->data = dt; //entry->data diubah menunjuk ke dt//
  entry->next = NULL; //entry->next ini menunjukkan bahwa entry ini mencari elemen sesudah yang kita tunjuk yaitu kosong//
  if(head==NULL) //Disini diberitahu jika head nya kosong...//
  {
    //maka elemen pertama atau head nya adalah entry dan tail nya adalah head, kalau tidak, tail akan berlanjut pada entry dimana entry ini adalah sebuah alamat baru yang kita masukkan datanya//
    head = entry;
    tail = head;
    }else{
    tail->next = entry;
    tail = entry;
    }
  }

void hapus() //hapus adalah blok code yang akan dieksekusi pada program yang ada didalam kurung kurawal dengan void yang tidak akan mengembalikan nilai apapun yang nantinya akan digunakan untuk menghapus inputan yang kita buat di awal//
{
  int simpan; //mendeklarasi sebuah data dengan nama simpan//
  if(head==NULL) //jika head nya kosong maka...//
  {
    //outputnya adalah kalimat dibaris ke 48 kalo tidak, data yang ternama Simpan akan menjadi head atau yang terdata di awal//
    cout<<"\nlinked list kosong, penghapusan tidak bisa dilakukan"<<endl;
    }else{
    simpan  = head ->data;
    del = head; //data itu akan dihapus dengan fungsi del//
    head = head->next; //data itu akan diteruskan ke fungsi yang lain diluar code Hapus//
    delete del;
    cout<<"\ndata yang dihapus adalah " << simpan << endl; //SIMPAN yang ditunjukkan adalah data yang kita input di code Input//
      }
  }

void cetak() //cetak adalah blok code yang akan dieksekusi pada program yang ada didalam kurung kurawal dengan void yang tidak akan mengembalikan nilai apapun, nantinya fungsi ini digunakan untuk mencetak hasil-hasil yang kita input di awal//
{
  curr = head; //curr adalah data yang kita masukkan diawal atau head//
  if(head == NULL) //jika head nya kosong maka...//
  {
    //output nya adalah kalimat dibaris ke 64 kalau tidak, outputnya ngeluarkan kalimat dibaris ke ke 66 dengan hasil-hasil yang kita input diawalan//
    cout<<"\ntidak ada data dalam linked list"<<endl;
    }else{
    cout<<"\nData yang ada dalam linked list adalah"<<endl;
    cout<<setw(6); //mengatur lebar dari suatu tampilan data//
    while(curr!=NULL) //selama curr nya tidak kosong, curr akan menampilkan data-data yang kita masukkan, sampai kita berhenti memasukan data maka curr nya akan memberi output NULL atau kosong karna tidak adalagi data yang dimasukkan selain data yang kita input sendiri//
    {
      cout<<curr->data<<"->";
      curr = curr->next;
      }
    cout<<"NULL";
    cout<<endl;
    }
  }

void menu() //menu adalah blok code yang akan dieksekusi pada program yang ada didalam kurung kurawal dengan void yang tidak akan mengembalikan nilai apapun//
{
  char pilih, ulang; //karakter yang akan dimasukkan adalah pilihan dan ulang//
  int data; //mendeklarasikan data//
  ulang: //dibuat titik dua (:) untuk melakukan pengulangan//
  do
  {
    //pada baris 86-93 akan dibuat untuk output atau soal yang akan diberi//
    cout<<"       SINGLE LINKED LIST      "<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Menu : "<<endl;
    cout<<"1. Input data"<<endl;
    cout<<"2. Hapus data"<<endl;
    cout<<"3. Cetak Data"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Masukkan pilihan Anda : ";
    cin>>pilih;
    //pilih yang dimaksud adalah switch case yang ada dibawah ini. apa yang ingin kita pilih diantaranya dari nomor 1-4, jika pilihannya diluar itu makan kita disuruh mengulang untuk memilih (gunanya fungsi 'ulang:')'//
    switch(pilih)
    {
      case '1' :
        cout<<"\nMasukkan data : ";
        cin>>data; //kita input data awalan//
        input(data); //tersimpan ke memori//
        break;
      case '2' :
        hapus(); //fungsi del yang ada di kode Hapus untuk menghapus data yang kita input//
        break;
      case '3' :
        cetak(); //menampilkan curr atau data yang kita input di awal yang sudah disimpan ke memori,dicetak kembali//
        break;
      case '4' :
        exit(0); //keluar dari program//
        break;
      default :
        cout<<"\nPilih ulang"<<endl;
      }
    cout << "\nKembali ke menu?(y/n)"; 
    cin >> ulang;
    } //jika sudah selesai melakukan penginputan data, kita akan diberi pilihan akan kembali ke menu atau tidak//
    while(ulang=='y' || ulang=='Y');
  } //jika y/Y maka akan diulang ke menu, jika n maka penginputan selesai//

int main(){ //memberitahukan komputer untuk memulai kode yang ada didalam tanda kurawal yaitu fungsi dari kode inisialisasi dan kode menu//
  inisialisasi();
  menu();
  return EXIT_SUCCESS; //Nilai yang disediakan sebagai argumen dikembalikan ke EXIT_SUCCESS sebagai kode pengembalian program atau kode keluar//
}