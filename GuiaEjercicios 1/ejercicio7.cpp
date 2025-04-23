#include <iostream>
#include <vector>
#include <string> 

using namespace std; 

int main(){
    int v1; 
    int v2; 
    
    cout << "Ingresa dos valores enteros y te digo cual es mayor: "; 
    cin >> v1;
    cout << '\n' << " ahora el otro: ";
    cin >> v2;

    (v1 > v2) ? cout << "El mayor es: " << v1 << endl:
    (v2 > v1) ? cout << "El meyor es: " << v2 << endl: 
     cout << "Los numeros son iguales campeón..." << endl;

    return 0; 
}