#include <iostream>
#include <math.h>
using namespace std;

long int pangkat(int z);
int main(){
int x, y, hasil;
  cout << "MENGHITUNG PANGKAT MENGGUNAKAN FUNGSI REKURSIF\n";
  cout << endl;
  cout << "Masukkan Nilai X = ";
  cin >> x;
  cout << "Masukkan Nilai Y = ";
  cin >> y;
  cout << "\n";
  hasil=pow(x,y);
  cout << x << " Dipangkatkan " << y << " = " << hasil << endl;
}

long int pangkat(int z){
    return (z);
  }
