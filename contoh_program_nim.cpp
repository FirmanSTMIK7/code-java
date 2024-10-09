#include <iostream>
using namespace std;


int main()
{
    string in0,in1,in2,in3,in4,in5,in6,in7,in8,in9;
    string prodi, angkatan, thn_msk,reg,nim;
    
    cout<<"masukkan nim: ";
    cin>>nim;
    in0=nim[0];
    in1=nim[1];
    in2=nim[2];
    in3=nim[3];
    in4=nim[4];
    in5=nim[5];
    in6=nim[6];
    in7=nim[7];
    in8=nim[8];
    in9=nim[9];
    
    prodi=in0+in1;
    angkatan=in2+in3;
    thn_msk=in4+in5;
    reg=in6+in7+in8+in9;
    
    if((prodi=="TI")||(prodi=="ti")){
      cout<<"Teknik Informatika "<<endl;
      cout<<angkatan<<endl;
      cout<<thn_msk<<endl;
      cout<<reg<<endl;
    } else if((prodi=="SI")||(prodi=="si")){
      cout<<"Sistem Informasi "<<endl;
      cout<<angkatan<<endl;
      cout<<thn_msk<<endl;
      cout<<reg<<endl;
    } else {
      cout<<"nim anda tidak valid"<<endl;
    }
}