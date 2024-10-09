#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout<<"\t \t SISTEM LAMPU LALU LINTAS \n \n";
   
   cout<<">>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<\n";
    //deklarasi variabel
    int warna;
    int merah, kuning;
    merah=1;
    kuning=2;
    string ketmerah, ketkuning, lampumati;
    ketmerah="berhenti!!!";
    ketkuning="hati-hati!!!";
    lampumati="jalan terus!!!";
    
    
    //algoritma dan output 
    cout<<"masukkan warna lampu: ";
    cin>>warna;
    if (warna == 1){
    cout<<ketmerah;  
    } else if (warna == 2){
    cout<<ketkuning;
    } else
    cout<<lampumati;
}