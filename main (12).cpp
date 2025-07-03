#include <iostream>
using namespace std;
int main()
{
   double n;
   
   cout << "este programa divide un numero por 2 hasta que su valor sea menor que 0,01"<<endl;
   cout << "ingrese un numero: "<<endl;
   cin >>n;
   
   while (n>0,01)
   {
        n= n / 2;  
        cout << n <<endl;
   }
 return 0;
}