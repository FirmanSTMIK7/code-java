#include <iostream>
using namespace std;

int main()
{
  //deklarasi variabel
  int mahasiswa;
  int kelompok;
  
  int kelompok1, kelompok2, kelompok3;
  int a, b, c;
  string text1, text2, text3, text4, text5;
  
  //input nilai
  mahasiswa=40;
  kelompok= 3;
  kelompok1=85;
  kelompok2=82;
  kelompok3=90;
  text1="hasil dari a(jumlah anggota perkelompok) adalah ";
  text2="hasil dari b(sisa bagi dari kelompok) adalah ";
  text3="hasil dari c(nilai rata-rata semua kelompok) adalah ";
  text4="hasil dari d(predikat masing-masing kelompok) :";
  text5="•predikat dari";
  
  //proses operator aritmatika 
  a=mahasiswa/kelompok;
  b=mahasiswa%kelompok;
  c=(kelompok1+kelompok2+kelompok3)/kelompok;
  
  
  //output
  cout << text1 << a << endl;
  cout << text2 << b << endl;
  cout << text3 << c << endl;
  
  //predikat masing-masing kelompok 
  string hasil1, hasil2, hasil3;
  
  cout << text4 << endl;
  
  hasil1 = (kelompok1 == 85) ? "B" : "tidak valid";
  cout << text5 << " kelompok 1 adalah " << hasil1 << endl;
  
  hasil2 = (kelompok2 == 82) ? "B-" : "tidak valid";
  cout << text5 << " kelompok 2 adalah " << hasil2 << endl;
  
  hasil3 = (kelompok3 == 90) ? "A" : "tidak valid";
  cout << text5 << " kelompok 3 adalah " << hasil3 << endl;
  
}