#include <iostream>
using namespace std;
int main()
{
    int n;
    int max=0;
    int min=999999999;
    double promedio=0;
    int suma=0;
    
    cout << "este programa te pide 10 numeros y te muestra la suma, el valor maximo, el minimo y su promedio"<<endl;

    for (int i=0; i<10 ; i++ )
    {
        cout << "ingrese un numero: ";
        cin >> n;
        
        suma = suma + n;
        
        if (n > max)
        {
            max = n;    
        }
        
        
        
        if (n < min)
        {
            min = n;    
        }
        
        
    }
    promedio = suma / 10;
    cout << "la suma es: " << suma <<endl;
    cout << "el valor maximo es: " << max <<endl;
    cout << "el valor minimo es: " << min <<endl;
    cout << "el promedio es: " << promedio <<endl;

 return 0;
}