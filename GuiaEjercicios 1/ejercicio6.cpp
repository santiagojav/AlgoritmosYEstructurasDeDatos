#include <string> 
#include <iostream>
#include <vector> 

using namespace std; 

int main(){

    double lado; 
    double perimetro;
    double area; 
    double volumen; 

    cout << "Ingrese el valor de un lado del cuadrado equilatero y te tiro toda la data: ";
    cin >> lado; 
    
    perimetro = lado * 4; 
    area = lado * lado;
    volumen = area * lado; 

    cout << "El area seria de: " << area << " cm caudrados.\n";
    cout << "El perimetro de tu cuadrado es de: " << perimetro << " cm. \n";
    cout << "El volumen que formaria el cubo seria de: " << volumen << " cm cubicos." << endl; 

    return 0; 
}