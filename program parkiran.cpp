#include <iostream>
using namespace std;



int main()
{
    cout << " SISTEM PARKIR SEPEDA MOTOR " "\n DALAM WAKTU SEHARI "<<endl << endl;
    cout << " ==> ALA FIRMAN MAULANA <== ""\n \n";
    
  //deklarasi 
   int masuk, keluar, harga, tambahan, lama_parkir, biaya_parkir;
    harga=2000;
    tambahan=1000;
  
  //algoritma  
    cout<<"jam masuk : ";
    cin>>masuk;
    cout<<"jam keluar : ";
    cin>>keluar;
    lama_parkir = keluar - masuk;
  
  //Kondisi percabangan
    if (lama_parkir == 1){
    biaya_parkir=lama_parkir*harga;
    }else if (lama_parkir > 1){
    biaya_parkir=(lama_parkir-1)*tambahan+harga;
    }else if (lama_parkir == 0)
    biaya_parkir=harga-harga;
      
  
  //output
    cout<<"\n \n \t\t Lama parkir adalah : "<<lama_parkir; 
    cout<<" jam"<<endl;
    cout<<"Maka Total biaya parkir sebesar Rp."<<biaya_parkir<<endl;
  }
   
    
    