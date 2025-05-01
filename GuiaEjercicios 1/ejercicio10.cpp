#include <iostream>
#include <vector>
#include <string> 

using namespace std; 

int main(){
    float numero;
    int cifras;
    int i;

    cout << "Ingresa un numero y te digo cuantas cifras tiene: "; 
    cin >> numero; 

    if(numero < 0){ // ecaluo si el numero es negativo
        numero = numero * -1; // lo hago pasitivo
    }
    for(i = numero; i >= 0;){ // recorro el numero 
        cifras++; // aumento el nuemro de cifras 
        i = i / 10; // lo divido y reduzco la cantidad de cifras. 
    }    
    cout << "Tu numero tiene " << cifras << " cifras." << endl;
}