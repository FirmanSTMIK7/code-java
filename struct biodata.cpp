#include <iostream>
using namespace std;

struct biodata{
  string nama_lngkap; 
  string nama_pnggln;  
  string ttl;
  string klmn; 
  string stts;
  string kampus; string prodi; 
  string nim; int tlp; string desa;
  string kec; string kab;
  char gol;
  string agama;  string hobby;
  string cita2; string alamat; string warga;
  string daerah_asal;
};


int main()
{
    biodata fir;  
    
    cout <<"===BIODATA PRIBADI MAHASISWA===\n";
    cout <<"Nama Lengkap            : ";
    cin >> fir.nama_lngkap;
    cin >> fir.nama_lngkap;
    cout <<"Nama Panggilan          : ";
    cin >> fir.nama_pnggln;
    cout <<"Tempat/Tanggal Lahir    : ";
    cin >> fir.ttl;
    cin >> fir.ttl;
    cin >> fir.ttl;
    cout <<"Jenis Kelamin           : ";
    cin >> fir.klmn;
    cout <<"Agama                   : ";
    cin >> fir.agama;
    cout <<"Kewarganegaraan         : ";
    cin >> fir.warga;
    cout <<"Daerah Asal             : ";
    cin >> fir.daerah_asal;
    cout <<"Status                  : ";
    cin >> fir.stts; 
    cin >> fir.stts;  
    cout <<"Perguruan Tinggi        : ";
    cin >> fir.kampus;
    cin >> fir.kampus;
    cout <<"Prodi                   : ";
    cin >> fir.prodi;
    cin >> fir.prodi;
    cout <<"NIM                     : ";
    cin >> fir.nim;
    cout <<"Alamat Di Lombok"<<endl;
    cout <<"      Dusun             : ";
    cin >> fir.desa;
    cout <<"      Kecamatan         : ";
    cin >> fir.kec;
    cin >> fir.kec;
    cout <<"      Kabupaten         : ";
    cin >> fir.kab;
    cin >> fir.kab;
    cout <<"Hobby                   : ";
    cin >> fir.hobby;
    cout <<"Cita - cita             : ";
    cin >> fir.cita2;
    cout <<"Golongan darah          : ";
    cin >> fir.gol;
    cout <<"No. Telepon             : ";
    cin >> fir.tlp;
}
