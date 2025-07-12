
#include <iostream>
using namespace std;
int main()
{
    
    int n;
    int impar = 0;
    int par = 0;
    int i = 0;
    int duda;
    int num1;
 cout << "cuantos valores quiere ingresar: ";
 cin >> n;
 
 while (i < n)
 {
    cout << "ingrese el numero: " <<endl;  
    cin >> num1;
    
 duda = num1 % 2;
 
 if (duda == 0)
 {
    par = par + 1;
 }
 else if (duda == 1)
 {
    impar = impar + 1;  
 }
    i = i +1; 
 }
 cout << "la cantidad de impares es de: " << impar << endl;
 cout << "la cantidad de pares es de: " << par << endl;
 return 0;
}
