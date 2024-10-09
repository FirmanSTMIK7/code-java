#include <iostream>
using namespace std;

struct ketua{
  string nama;
  int umur;
  char predikat;
  };
  
struct ukm{
  string nama_ukm;
  string jenis_ukm;
  int usia_ukm;
  
  ketua ketua1, ketua2, ketua3;
  }; 

int main()
{
    ketua ketua1, ketua2, ketua3;
    ukm ukm1,ukm2,ukm3;
    
    ketua1.nama="Firman Haris";
    ketua1.umur=22;
    ketua1.predikat='A';
    
    ketua2.nama="Falah";
    ketua2.umur=23;
    ketua2.predikat='B';
    
    ketua3.nama="Nuri";
    ketua3.umur=20;
    ketua3.predikat='C';
    
    ukm1.nama_ukm="TECHCODE";
    ukm1.jenis_ukm="Pemrograman";
    ukm1.usia_ukm=2;
    
    ukm2.nama_ukm="GUMPALA";
    ukm2.jenis_ukm="JARINGAN";
    ukm2.usia_ukm=3;
    
    ukm3.nama_ukm="HALU";
    ukm3.jenis_ukm="Majalah";
    ukm3.usia_ukm=2;
    
    
    
    cout<<"Nama Ketua 1: "<<ketua1.nama<<endl;
    cout<<"Umur        : "<<ketua1.umur<<endl;
    cout<<"Predikat    : "<<ketua1.predikat<<endl;
    cout<<"Nama UKM    : "<<ukm1.nama_ukm<<endl;
    cout<<"Jenis UKM   : "<<ukm1.jenis_ukm<<endl;
    cout<<"Umur UKM    : "<<ukm1.usia_ukm<<" Tahun\n"<<endl;
    
    cout<<"Nama Ketua 2: "<<ketua2.nama<<endl;
    cout<<"Umur        : "<<ketua2.umur<<endl;
    cout<<"Predikat    : "<<ketua2.predikat<<endl;
    cout<<"Nama UKM    : "<<ukm2.nama_ukm<<endl;
    cout<<"Jenis UKM   : "<<ukm2.jenis_ukm<<endl;
    cout<<"Umur UKM    : "<<ukm2.usia_ukm<<" Tahun\n"<<endl;
    
    cout<<"Nama Ketua 3: "<<ketua3.nama<<endl;
    cout<<"Umur        : "<<ketua3.umur<<endl;
    cout<<"Predikat    : "<<ketua3.predikat<<endl;
    cout<<"Nama UKM    : "<<ukm3.nama_ukm<<endl;
    cout<<"Jenis UKM   : "<<ukm3.jenis_ukm<<endl;
    cout<<"Umur UKM    : "<<ukm3.usia_ukm<<" Tahun\n"<<endl;
   
    
}