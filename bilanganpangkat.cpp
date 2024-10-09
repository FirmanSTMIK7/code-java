#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int angka, pangkat;
   cout << " angka : ";
   cin >> angka;
   cout << " pangkat : ";
   cin >> pangkat;
   cout << " maka hasil dari " << angka << " pangkat " << pangkat;
   cout << " adalah = " << pow (angka, pangkat) << endl;
}