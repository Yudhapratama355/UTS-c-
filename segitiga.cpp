#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int luas, keliling;
  int alas, tinggi, sisi;
  cout << "aplikasi hitung luas+keliling segitiga"<<endl;
  cout << "masukkan alas ="; cin >> alas;
  cout << "masukkan tinggi ="; cin >> tinggi;
  cout << "masukkan sisi ="; cin >> sisi;
  luas = 0.5*alas*tinggi;
  keliling = sisi+sisi+sisi;
  cout << "luas segitiga ="<<luas<<endl;
  cout << " keliling segitiga ="<<keliling<<endl;
    
}