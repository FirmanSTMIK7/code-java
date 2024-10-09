#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int tgl, bulan, tahun, umur;
    cout << "masukan tanggal lahir :";
    cin >> tgl;
    cout << "masukan bulan lahir :";
    cin >> bulan;
    cout << "masukan tahun lahir :";
    cin >> tahun;
    umur = 2022 - tahun;
    cout << "tanggal lahir anda adalah : "<<tgl<<"/"<<bulan<<"/"<<tahun<<"\n";
    cout << "umur anda adalah : " << umur << endl;
    
    if (umur >= 17) 
      cout << "ANDA BOLEH MEMBUAT SIM";
    else if (umur <= 17)
      cout << "ANDA BELUM BOLEH MEMBUAT SIM";
    
}