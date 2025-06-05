#include <iostream>
using namespace std;
int main()
{
    int total = 0;
    int suma = 2;
    
    for (int i = 0; i < 50 ; i++)   
    {
        total = total + suma;
        suma = suma + 2;
        cout << "el resultado de la suma es: "<< total<<endl;
    }
 return 0;
}