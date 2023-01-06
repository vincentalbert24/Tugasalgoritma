#include<iostream>
#define maxstack 7  //*merupakan inisialisasi bahwa variable maxstack dapat menapung antrian sebanyak 7*//
using namespace std;

struct STACK{ //deklarasi struct yang berkode STACK//
int s[7]; //[7] karena max data array nya 7 || s untuk rumus perulangan nantinya//
int top;//tipe data untuk memasukkan keterangan yang akan digunakan pada rumus//
};
struct STACK st; //st hanya seperti pengalamatan terhadap si STACK//
void push(int data){ //disini kita diberi tau bahwa push digunakan untuk proses penambahan data ke dalam stack dan di dalam blok code itu memiliki sebuah data atau dinamakan dengan int data yang dimana isi itu fungsinya tidak akan mengembalikan nilai//
  if(st.top==maxstack){ //jika datanya bertambah hingga mencapai maximum, maka...//
    cout<<"data penuh"<<endl; //data penuh//
    }else{ //kalau belum mencapai maximum, maka...//
    st.top = st.top +1; //data akan bertambah hingga mencapai batas sebelum maximum yang sudah ditetapkan pada struct STACK//
    st.s[st.top] = data;
    cout<<"data ditambahkan"<<endl; //jadi keluar output data ditambahkan karena operasi push itu bekerja disaat belum mencapai maximum//
    }

  }
void pop(){ //disini kita diberi tau bahwa pop digunakan untuk mengambil atau menghapus data dari stack dengan void yang tidak akan mengembalikan nilai//
  if(st.top==-1){ //jika data nya -1 atau kalau logika nya belum memasukkan data apapun karena data dimulai dari 0,maka...//
    cout<<"data kosong"<<endl; //data kosong//
    }else{ //kalau tidak, maka...//
    st.top = st.top-1; //data awal akan berkurang satu persatu sehingga semua data nya terhapus,jadi...//
    cout<<"data dihapus"<<endl; //data dihapus//
    }
  
  }

void show(){ //disini kita diberi tau bahwa show digunakan untuk menampilkan data-data dari stack dengan void yang tidak akan mengembalikan nilai//
  if(st.top==-1){ //jika data nya -1 atau belum memasukkan data sama sekali maka...//
    cout<<"data kosong, tidak ada yang bisa ditampilkan"; //outputnya adalah dibaris 32 ini//
    }else{  //kalau tidak, maka...//
    for(int x=0;x<=st.top;x++){ //data akan melakukan perulangan sesuai berapa banyak yang telat ditambah//
      cout<<st.s[x]<<"=>"; //dari perulangan itu dikasih tanda (=>) setiap mengulang tiap data//
      }
    cout<<endl;
    }
  }
int main(){ //memberitahukan komputer untuk memulai kode yang ada didalam tanda kurawal//
  st.top = -1; //mulai dari data awal yang kosong...//
  push(1); //data bertambah dengan keterangan angka agar angka itu bisa ditampilkan pada output ketika saatnya fungsi Show mulai bekerja//
  push(2); //begitu juga seterusnya//
  push(3);
  push(4);
  push(5);
  push(6);
  push(7);
  pop(); //memanggil fungsi pop//
  show(); //memanggil fungsi show//
  }