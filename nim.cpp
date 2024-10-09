#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   
   
   char nim[10];
   
    cout<<" Masukkan Nim Anda : ";
    for(int f=0; f<10; f++){
      cin>>nim[f];}
      cout<<endl;
      cout<<"|=========≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠========|"<<endl;
      cout<<"|=========DATA YANG TERSIMPAN========|"<<endl;
      cout<<"|=========≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠========|"<<endl;
      cout<<"|____________________________________|"<<endl;
      cout<<"|NIM            : ";
    for(int n=0; n<10; n++){
      cout<<nim[n];}
 
      cout<<"         |"<<endl; 
    if(nim[0]=='T'||nim[0]=='t'){
     cout<<"|PRODI          : TEKNIK";
     (nim[1]=='I'||nim[1]=='i');{
     cout<<" INFORMATIKA |";}
     cout<<endl;
     cout<<"|ANGKATAN KE    : "<<nim[2]<<nim[3]<<"                 |"<<endl;
     cout<<"|TAHUN MASUK    : "<<"20"<<nim[4]<<nim[5]<<"               |"<<endl;
     cout<<"|NOMOR REGISTER : "<<nim[6]<<nim[7]<<nim[8]<<nim[9]<<"               |"<<endl;
     cout<<"|====================================|"<<endl;
   } else if(nim[0]=='S'||nim[0]=='s'){
     cout<<"|PRODI          : SISTEM";
     (nim[1]=='I'||nim[1]=='i');{
     cout<<" INFORMASI   |";}
     cout<<endl;
     cout<<"|ANGKATAN KE    : "<<nim[2]<<nim[3]<<"                 |"<<endl;
     cout<<"|TAHUN MASUK    : "<<"20"<<nim[4]<<nim[5]<<"               |"<<endl;
     cout<<"|NOMOR REGISTER : "<<nim[6]<<nim[7]<<nim[8]<<nim[9]<<"               |"<<endl;
     cout<<"|====================================|"<<endl;
   } else{
     cout<<"|____________________________________|"<<endl;
     cout<<"|    ×××BUKAN MAHASISWA STMIK×××     |"<<endl;
     cout<<"|====================================|"<<endl;
   }
     cout<<sizeof(nim)/sizeof(*nim);
}