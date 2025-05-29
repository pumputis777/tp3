/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
 float num1;
 
 cout << "ingrese un numero: ";
 cin >> num1;
 while (num1 > 0.01)
 {
    num1 =num1 / 2;
    cout << "la division dio como resultado; " << num1 << endl;
 }
    return 0;
}