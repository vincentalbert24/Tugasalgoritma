#include<iostream>
using namespace std;
void tambah(int x, int z);
int main()
{
int x, y;
x = 5;
y = 9;
cout<<"Nilai Sebelum Fungsi Digunakan ";
cout<<"\nx = "<<x<<" z = "<<y;
tambah(x,y);
cout<<"\nNilai Setelah Fungsi Digunakan";
cout<<"\nx = "<<x<<" z = "<<y;
return 0;
}
void tambah(int x, int z){
x+=5;
z+=7;
cout<<"\n\nNilai di dalam Fungsi Tambah()";
cout<<"\nx = "<<x<<" z = "<<z;
cout<<endl;
}