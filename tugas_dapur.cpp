#include <iostream>
using namespace std;

int main()
{
    //DIKETAHUI:
    int P_dapur = 4;
    int panci, sogon, teplon, sendok;
    float keseluruhan, rata_rata;
    panci = 12;
    sogon = 22;
    teplon = 28;
    sendok = 45;
    
    //DITANYA:
    keseluruhan = panci+sogon+teplon+sendok;
    rata_rata = keseluruhan/P_dapur;
    
    //TAMPILKAN:
    cout << "a. JUMLAH KESELURUHAN BARANG - \ndi swalayan adalah : ";
    cout << keseluruhan << endl << endl;
    cout << "b. RATA - RATA JUMLAH BARANG - \ndi swalayan adalah : ";
    cout << rata_rata << endl;
}