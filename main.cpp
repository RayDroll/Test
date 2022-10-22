/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int goscie;
    int pizza;
    
    cout<<"ile masz gosci?";
    cin >> goscie;
    cout << "ile masz kawalkow pizzy?";
    cin >> pizza;
    
    float reszta = pizza%goscie;
    
    
        cout << "Organizator dostanie: " << (pizza-reszta)/goscie + reszta << " a uczestnicy dostaną: " << (pizza-reszta)/goscie;
    

    return 0;
}


