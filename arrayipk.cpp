#include <iostream>
using namespace std;

int main()
{
    int ipk=7;
    float nilai[ipk];
    cout<<"PENERIMAAN BEASISWA SELAMA 7 SEMESTER : "<<endl;
    
    
    cout<<"\n==================================\n\n";
    cout<<"KETERANGAN PENERIMA BEASISWA: \n\n";
    for(int i=1; i<ipk+1; i++){   
      cout<<"Semester "<<i<<": ";
      cin>>nilai[i];  
      if(nilai[i]>=3.5){
      cout<<"Semester "<<i<<": | dengan ipk "<<nilai[i]<<endl;
      cout<<"=> Berhak mendapatkan beasiswa BANK BNI \n"<<endl;
    } else if (nilai[i]>=3.0){
      cout<<"Semester "<<i<<": | dengan ipk "<<nilai[i]<<endl;
      cout<<"=> Berhak mendapatkan beasiswa PPA \n"<<endl;
    } else if (nilai[i]>=2.75){
      cout<<"Semester "<<i<<": | dengan ipk "<<nilai[i]<<endl;
      cout<<"=> Berhak mendapatkan beasiswa BBM \n"<<endl;
    } else if (nilai[i]<2.75 && nilai[i]>1){
      cout<<"Semester "<<i<<": | dengan ipk "<<nilai[i]<<endl;
      cout<<"=> Tidak berhak mendapat beasiswa apapun \n"<<endl;
    } else {
      cout<<"Semester "<<i<<": | dengan ipk "<<nilai[i]<<endl;
      cout<<"=> DI DO DARI KAMPUS \n"<<endl;
    }
}
}