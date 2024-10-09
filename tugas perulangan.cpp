#include <iostream>
using namespace std;

int main()
{
    int raport = 1;
    do {
         
        if (raport%2==0)
        cout<<"genap = ";
        else
        cout<<"ganjil = ";            
        
      cout << raport << " lembar" << endl;
      raport++;
      
      
    } while(raport <= 30);
}