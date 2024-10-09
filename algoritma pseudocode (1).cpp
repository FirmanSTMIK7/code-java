#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int tv;
    cout <<"DAFTAR CHANNEL TV"<<endl;
    cout <<"1. RCTI"<<endl;
    cout <<"2. ANTV"<<endl;
    cout <<"3. TRANS TV"<<endl;
    cout <<"..................... "<<endl;
    
    
    cout <<"masukkan channel pilihan:";
    cin >> tv;
    
    if (tv==1){
      cout<<"channel yang anda pilih adalah RCTI ";
    } else if (tv==2){
      cout<<"channel yang anda pilih adalah ANTV ";
    } else if (tv==3){
      cout<<"channel yang anda pilih adalah TRANS TV ";
    } else
      cout<<"channel tidak tersedia"<<endl;
}