#include <iostream>
using namespace std;


int main()
{
    //LUAS LINGKARAN
    cout << "    ||≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈||\n";
    cout << "    ||   MENGHITUNG VOLUME TABUNG    || \n";
    cout << "    ||≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈||\n\n";
    int jari_jari, tinggi;
    
    //PROSES 
    cout << "Masukkan jari-jari: ";
    cin >> jari_jari;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;
    
    float volume = 3.14*jari_jari*jari_jari*tinggi;
    cout << "Diketahui :\n";
    cout << "• Jari-jari = "<<jari_jari<<"cm"<<endl;
    cout << "• tinggi = "<<tinggi<<"cm"<<endl;
    cout << "Ditanya :\n";
    cout << "• volume tabung ???"<<endl;
    cout << "®=> Rumus = 3,14*jari-jari²*tinggi"<<endl<<endl;
    cout << "<=<=<=<=<=Penyelesaian=>=>=>=>=>"<<endl;
    cout << "✓ volume tabung = 3,14*"<<jari_jari<<"²*"<<tinggi<<endl;
    cout << "✓ Maka Volume tabung adalah = ["<<volume<<"cm]"<<endl;

    cout << "\n\n";
    cout << "→→→→→→→→→→→→→→→→→→→→→→→→→"<<endl;
    cout << "←←←←←←←←←←←←←←←←←←←←←←←←←"<<endl;
    cout << "\n\n\n";
    
    //LUAS PERSEGI 
    cout << "\t\t\t||≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈||\n";
    cout << "\t\t\t||   MENGHITUNG LUAS PERSEGI   || \n";
    cout << "\t\t\t||≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈||\n\n";
    int sisi;
    
    //PROSES 
    cout << "Masukkan nilai sisi : ";
    cin >> sisi;
    
    float luass = sisi*sisi;
    cout << "Diketahui :\n";
    cout << "• Sisi Persegi = "<<sisi<<"cm"<<endl;
    cout << "Ditanya :\n";
    cout << "• Luas Persegi ???"<<endl;
    cout << "®=> Rumus = sisi*sisi"<<endl<<endl;
    cout << "<=<=<=<=<=Penyelesaian=>=>=>=>=>"<<endl;
    cout << "✓ Luas Persegi = "<<sisi<<"*"<<sisi<<endl;
    cout << "✓ Maka Luas Persegi adalah = ["<<luass<<"cm]"<<endl;
}
