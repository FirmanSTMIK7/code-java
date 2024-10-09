#include <iostream>
using namespace std;

struct barang{
  int no; string nama; int jumlah;
  int harga_satuan; int harga_total;
  int tgl_order; int bln_order; int thn_order;
  int tgl_laku; int bln_laku; int thn_laku;
};

int main()
{ 
  int bnyk=5;
  int cek[bnyk];
  cout << "============================\n";
  cout << " STOK BARANG TOKO MAHMUD MD\n";
  cout << "============================\n\n";
  for (int a = 1; a <= bnyk+1; a++){
   barang barang1;
   
   cout <<"NOMOR BARANG        : ";
   cin >> barang1.no;
   cout <<"NAMA BARANG         : ";
   cin >> barang1.nama;
   cout <<"JUMLAH BARANG       : ";
   cin >> barang1.jumlah;
   cout <<"HARGA SATUAN        : ";
   cin >> barang1.harga_satuan;
   cout <<"HARGA TOTAL         : ";
   cout << barang1.harga_satuan*barang1.jumlah<<endl;
   cout <<"TANGGAL ORDER       : ";
   cin >> barang1.tgl_order;
   cout <<"BULAN ORDER         : ";
   cin >> barang1.bln_order;
   cout <<"TAHUN ORDER         : ";
   cin >> barang1.thn_order;
   cout <<"TANGGAL LAKU        : ";
   cin >> barang1.tgl_laku;
   cout <<"BULAN LAKU          : ";
   cin >> barang1.bln_laku;
   cout <<"TAHUN LAKU          : ";
   cin >> barang1.thn_laku;
   cout << "\n=========================\n\n";
}
}