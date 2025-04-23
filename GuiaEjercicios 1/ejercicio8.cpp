#include <iostream>
#include <vector>
#include <string> 

using namespace std; 

int main(){
    int lado1;
    int lado2;
    int lado3;
    string tipo;

    cout << "Ingresa los valores de un triangulo y te digo de que tipo de triangulo se trata: ";
    cin >> lado1; 
    cout << "ahora el segundo: "; 
    cin >> lado2;
    cout << "y el tercero: "; 
    cin >> lado3; 

    (lado1 == lado2 && lado2 == lado3) ? tipo = "Equilatero.":
    (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) ? tipo = "Isoseles.": 
        tipo = "Escaleno."; 

    cout << "Estamos ante la precencia de un triangulo " << tipo << endl; 
    return 0;
}