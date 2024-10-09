#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int m,d;
     for (int j=1; j<=24; j+=1){
       m= j *60;
          d=m*60;
   cout<<j<<" Jam "<<m<<" Menit "<<d<<" Detik"<<endl;
   } 
}