#include <iostream>
using namespace std;


int main()
{
  //deklarasi variabel 
  int kas;
  cout << "MENENTUKAN JENIS PERUSAHAAN \n  BERDASARKAN JUMLAH KAS \n \n";
    
  
   
   //kondisi variabel
for (kas=0; kas<=10; kas++){
  cout << "Masukan jumlah kas perusahaan \nlebih kecil dari 11 M = ";
      
  cin >>kas;
      if (kas <=10)      
        if (kas ==10)
          cout <<"=> Perusahaan Makro Kelas A <= \n";
          cin >>kas;
         if (kas ==9)
          cout <<"=> Perusahaan Makro Kelas B <= \n";
        cin >>kas;
         if (kas ==8)
          cout <<"=> Perusahaan Makro Kelas C <= \n";
         cin >>kas;
         if (kas ==7)
          cout <<"=> Perusahaan Makro Kelas D <= \n";
          cin >>kas;
          if (kas <=6)
            if (kas ==6)
              cout <<"=> Perusahaan Menengah Kelas A <= \n";
              cin >>kas;
           if (kas ==5)
              cout <<"=> Perusahaan Menengah Kelas B <= \n";
              cin >>kas;
           if (kas ==4)
              cout <<"=> Perusahaan Menengah Kelas C <= \n";
              cin >>kas;
           if (kas ==3)
              cout <<"=> Perusahaan Menengah Kelas D <= \n";
             cin >>kas;
           if (kas ==2)
              cout <<"=> Perusahaan Menengah Kelas E <= \n";
            cin >>kas;
           if (kas ==1)
              cout <<"=> Perusahaan Menengah Kelas F <= \n";
            cin >>kas;
           if (kas ==0)
              cout <<"=> Perusahaan Belum Terdaftar <= \n";
            
           
        
      }
  
} 