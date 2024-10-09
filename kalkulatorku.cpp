#include <iostream>
using namespace std;


int main()
{
   float a, b, c, hasil, hasil2;
   char aritmatika;
   
   cout <<" Welcome to Calculator Firman Maulana\n \n ";
   
   //masukan input
   cout <<"masukkan angka pertama: ";
   cin >> a;
   cout <<" pilih operator +,-,*,/: ";
   cin >> aritmatika;
   cout <<" masukkan angka kedua: ";
   cin >> b;
   
   cout << "\n hasil perhitungan dari: ";
   cout << a << " " << aritmatika << " " << b;
   cout <<"\n";
        cout <<" pilih operator +,-,*,/: ";
   cin >> aritmatika;
   cout <<" masukkan angka berikut: ";
   cin >> c;
   //proses aritmatika
   if (aritmatika == '+'){
       hasil = a + b;
       cout << " = " << hasil << endl;
   hasil2 = c + hasil;
   } else if (aritmatika == '-'){
       hasil = a - b;
   } else if (aritmatika == '*'){
       hasil = a * b;
   } else if (aritmatika == '/'){
       hasil = a / b;
   } else {
     cout << " operator tidak valid " << endl;
   }
   
   cout << " = " << hasil << endl;
   
   
  
     
   
  
   
   
   
   
   
   
    
   
   
}