#include <iostream>
using namespace std;


int main()
{
    int jum;
    cout<<"Masukan jumlah peserta: ";
    cin>>jum;
    int angka[jum];
    
    for(int a = 1; a < jum+1; a++){
      cout<<"Peserta ke "<<a<<": ";
      cin>>angka[a];
    } 
    cout<<"\n=======================\n";
    cout<<"TAMPILAN\n";
    cout<<"=======================\n";
    for(int b = 1; b < jum+1; b++){
      cout<<"point peserta ke "<<b<<" adalah "<<angka[b]<<endl;
    }
}