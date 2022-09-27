#include <iostream>
using namespace std;
int main() {
  
  double x,y,a,b,phi;

  phi=3.1415;

  cout << "Masukan nilai jari-jari lingkaran =";
  cin >> x;
  cout << "Masukan nilai tinggi tabung =";
  cin >> y;

  a = phi*x*x;
  b = a*y;

  cout << "Luas lingkaran adalah " << a << endl;
  cout << "Volume tabung adalah " << b << endl;
  getchar();

  }