#include <iostream>
using namespace std;
 int hargaSetelahPajak(int HargaDasar) {
   return HargaDasar + (HargaDasar * 10/100);
   }
 int main()
 {
int HargaMawar = 10000;
int HargaFinalMawar = hargaSetelahPajak(HargaMawar);
  cout << "Harga Mawar 1 tangkai Rp." << HargaFinalMawar << endl;
 return 0;
  }