#include <iostream>
using namespace std;


int main()
{
    char nilai;
    cout<<"predikat nilai mahasiswa antara lain : "<<endl;
        
    cout <<"masukkan nilai : ";
      cin >> nilai;
        switch (nilai)
{
      case 'A':
        cout << "✓ sangat baik"<<"\n";
          break;
      
      case 'B':
        cout << "✓ baik" <<"\n";
          break;
      
      case 'C':
        cout << "✓ cukup" <<"\n";
          break;
      
      case 'D':
        cout << "✓ kurang" <<endl;
          break;
      
      case 'E':
        cout << "✓ sangat kurang" <<"\n";
          break;
      
      
      default:
        cout << "×× tidak valid ××" <<"\n";
          break;
        }
}