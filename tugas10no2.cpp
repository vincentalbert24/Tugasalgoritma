#include <iostream>
using namespace std;

void tambah(int x,int y);
  
int main(){
  int x = 4, z = 6;
  cout << "Nilai Sebelum Pemanggilan Fungsi";
  cout << "\nx = "<< x << " z = " << z;
  tambah(x,z);
  getchar();
  }

 void tambah(int x,int y){
   x+=7;
   y+=5;
   cout << endl;
   cout << "\nNilai di Akhir Fungsi Tambah()";
   cout << "\nx = " << x << " z = " << y;
   cout << endl;
   cout << "\nNilai Setelah Pemanggilan Fungsi";
   cout << "\ny = " << x << " z = " << y;
    }