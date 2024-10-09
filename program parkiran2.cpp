#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout << "SISTEM PARKIR" "\n \n";
   int lama, harga, tambahan, jam_berikutnya;
  
    harga=2000;
    tambahan=1000;
    cout<<"Masukan Lama Parkir (Per Jam) : ";
    cin>>lama;
  //Kondisi percabangan
   if (lama>1){
    jam_berikutnya=((lama-1)*tambahan);
  } else if (lama==0){
    jam_berikutnya=0-harga;
  } else {
    jam_berikutnya=0;  
  }
  //Menampilkan Hasil
  cout<<"------------------------------------"<<endl;
  cout<<"1 Jam Pertama  Rp:"<<harga<<endl;
  cout<<"Jam Berikutnya Rp:"<<jam_berikutnya<<endl;
  cout<<"Total Bayar    Rp:"<<harga+jam_berikutnya<<endl;

}