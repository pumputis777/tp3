
#include <iostream>
using namespace std;
int main()
{
    int impar=0;
    int decision;
    int ayuda1=0;
    int ayuda2=0;
    
    for (int i = 1; i<=300; i++)
    {
        
        decision = i % 2;
        
        if (not decision == 0)
        {
            impar = impar + 1;
            
            ayuda1 = i + ayuda1;
        }
        ayuda2 = i + ayuda2;
        
       
    }
    cout << "la cantidad de numeros impares es de: " <<impar <<endl;
    cout << "la suma de los numeros impares es: " << ayuda1 <<endl;
    cout << "la suma de todos los numeros es: " << ayuda2 <<endl;
 return 0;
}
