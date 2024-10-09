#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int menu;
    cout <<"~~~~~~~~~~~"<<endl;
    cout <<"DAFTAR MENU"<<endl;
    cout <<"~~~~~~~~~~~"<<endl;
    cout <<"1. PELCING : 15k"<<endl;
    cout <<"2. BEROK : 10k"<<endl;
    cout <<"3. LANSUK : 15k"<<endl;
    cout <<"4. SEPAT : 30k"<<endl;
    
    cout <<"====================="<<endl;
    
    cout <<"MENU YANG TERSEDIA"<<endl;
    cout <<"1. PELCING ✓"<<endl;
    cout <<"2. BEROK ✓"<<endl;
    cout <<"3. LANSUK = SOLD OUT"<<endl;
    cout <<"4. SEPAT ✓"<<endl;
    int Hpelcing, Hberok, Hlansuk, Hsepat;
    Hpelcing=15000;
    Hberok=10000;
    Hlansuk=15000;
    Hsepat=30000;
    cout <<"..................... "<<endl;
    
    
    
    cout <<"PILIH MENU : ";
    cin >> menu;
    cout<<"_______________________________________\n";
    if (menu==1){
      cout<<"MENU YANG ANDA PESAN PELCING \n";
      cout<<"HARGA = Rp.";
      cout<<Hpelcing;
      cout<<"\nPESANAN DI PROSES... MOHON TUNGGU!!!\n";
      cout<<"[PESANAN DI TERIMA KONSUMEN]";
    } else if (menu==2){
      cout<<"MENU YANG ANDA PESAN BEROK \n";
      cout<<"HARGA = Rp.";
      cout<<Hberok;
      cout<<"\nPESANAN DI PROSES... MOHON TUNGGU!!!\n";
      cout<<"[PESANAN DI TERIMA KONSUMEN]";
    } else if (menu==4){
      cout<<"MENU YANG ANDA PESAN SEPAT \n";
      cout<<"HARGA = Rp.";
      cout<<Hsepat;
      cout<<"\nPESANAN DI PROSES... MOHON TUNGGU!!!\n";
      cout<<"[PESANAN DI TERIMA KONSUMEN]";
   }
  
  
   else if (menu==3){
      cout<<"MENU YANG ANDA PESAN LANSUK \n";
      cout<<"[KOSONG] , SILAHKAN PILIH MENU LAIN \n";
      cout <<"PILIH MENU : ";
      cin>>menu;
      cout<<"_______________________________________\n";
   if (menu==1){
      cout<<"MENU YANG ANDA PESAN PELCING \n";
      cout<<"HARGA = Rp.";
      cout<<Hpelcing;
      cout<<"\nPESANAN DI PROSES... MOHON TUNGGU!!!\n";
      cout<<"[PESANAN DI TERIMA KONSUMEN]";
    } else if (menu==2){
      cout<<"MENU YANG ANDA PESAN BEROK \n";
      cout<<"HARGA = Rp.";
      cout<<Hberok;
      cout<<"\nPESANAN DI PROSES... MOHON TUNGGU!!!\n";
      cout<<"[PESANAN DI TERIMA KONSUMEN]";
    } else if (menu==4){
      cout<<"MENU YANG ANDA PESAN SEPAT \n";
      cout<<"HARGA = Rp.";
      cout<<Hsepat;
      cout<<"\nPESANAN DI PROSES... MOHON TUNGGU!!!\n";
      cout<<"[PESANAN DI TERIMA KONSUMEN]";
    } else
      cout<<"ANDA TIDAK JADI MEMESAN"<<endl;
    
   }
   cout<<"\n \n \n";
   cout<<"___________________\n";
   cout<<"LAKUKAN PEMBAYARAN \n";
   cout<<"___________________";
   int sudah;
   string bayar;
   cin>>sudah;
   bayar=(sudah==1)?"===PEMBAYARAN BERHASIL✓===":"LAKUKAN PEMBAYARAN ";
   cout<<bayar<<endl;
   cout<<"SILAHKAN MENINGGALKAN RESTORAN \n\n \n";
   cout<<"[KONSUMEN TELAH MENINGGALKAN RESTORAN] ";
}