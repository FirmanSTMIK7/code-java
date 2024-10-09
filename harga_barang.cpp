#include <iostream>
using namespace std;


int main()
{
  //deklarasi variabel 
  int harga;
  cout<< "MENENTUKAN KETERANGAN HARGA BARANG \n";
    cout << "masukan harga barang : ";
      cin >> harga;
     
  //kondisi variabel 
      if (harga>=250){
        cout << "=> harga terlalu tinggi <= \n";
      } else if (harga>=200){
        cout << "=> harga pas <= \n";
      } else if (harga>=150){
        cout << "=> harga terjangkau <= \n";
      } else if (harga>=100){
        cout << "=> murah banget <= \n";
      } else 
        cout << "=> harga barang tidak ada! <= \n";
} 