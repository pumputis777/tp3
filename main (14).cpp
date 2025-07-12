
#include <iostream>
using namespace std;
int main()
{
    int x;
    int resultado;
    
    cout << "ingrese un numero para darle la quita potencia: ";
    cin >> x;
    resultado = x;
    for (int i = 1; i < 5; i++)
    {
        resultado = resultado * x;
       
    }
    cout << "la quinta potencia de " <<x <<" es: " << resultado<<endl;

 return 0;
}
