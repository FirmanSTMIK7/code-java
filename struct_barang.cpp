#include <iostream>
using namespace std;

struct barang{
  int no;
  string nama;
  int jumlah;
};

struct harga{
  int harga_satuan;
  int harga_total;
};

struct tanggal_order{
  int tanggal_or;
  int bulan_or;
  int tahun_or; 
};

struct tanggal_laku{
  int tanggal_lak;
  int bulan_lak;
  int tahun_lak;
};

int main()
{ 
  barang barang1;
  harga harga1;
  tanggal_order order1;
  tanggal_laku laku1;
  
  cout<<"=========STRUKTUR TOKO=========\n\n";
  cout <<"NOMOR BARANG\t        : ";
  cin >> barang1.no;
  
  cout <<"NAMA BARANG\t         : ";
  cin >> barang1.nama;
  
  cout <<"JUMLAH BARANG\t       : ";
  cin >> barang1.jumlah;
  
  cout <<"HARGA SATUAN BARANG\t : ";
  cin >> harga1.harga_satuan;
  
  cout <<"HARGA TOTAL BARANG\t  : ";
  cout << barang1.jumlah*harga1.harga_satuan << endl;
  
  cout <<"<= TANGGAL ORDER BARANG =>\n";
  cout <<"TANGGAL\t\t           : ";
  cin >> order1.tanggal_or;
  cout <<"BULAN\t\t             : ";
  cin >> order1.bulan_or;
  cout <<"TAHUN\t\t             : ";
  cin >> order1.tahun_or;
  
  cout <<"<= TANGGAL LAKU BARANG =>\n";
  cout <<"TANGGAL\t\t           : ";
  cin >> laku1.tanggal_lak;
  cout <<"BULAN\t\t             : ";
  cin >> laku1.bulan_lak;
  cout <<"TAHUN\t\t             : ";
  cin >> laku1.tahun_lak;
  
  cout << "================================\n"<<endl;
  cout << "=========OUTPUT======="<<endl;
  cout << "NOMOR BARANG         : "<< barang1.no << endl;
  cout << "NAMA BARANG          : "<< barang1.nama << endl;
  cout << "JUMLAH BARANG        : "<< barang1.jumlah << endl;
  cout << "HARGA SATUAN BARANG  : "<< harga1.harga_satuan << endl;
  cout << "HARGA TOTAL BARANG   : "<< barang1.jumlah*harga1.harga_satuan << endl;
  
  cout << "<= TANGGAL ORDER BARANG => "<< endl;
  cout << "TANGGAL              : "<< order1.tanggal_or << endl;
  cout << "BULAN                : "<< order1.bulan_or << endl;
  cout << "TAHUN                : "<< order1.tahun_or << endl;
  
  cout << "<= TANGGAL LAKU BARANG => "<< endl;
  cout << "TANGGAL              : "<< laku1.tanggal_lak << endl;
  cout << "BULAN                : "<< laku1.bulan_lak << endl;
  cout << "TAHUN                : "<< laku1.tahun_lak << endl;
}