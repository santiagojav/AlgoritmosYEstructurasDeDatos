#include <iostream>
#include <vector>
#include <string> 

using namespace std; 

int main(){
    float numero;
    int cifras;
    int i;

    cout << "Ingresa un numero en base 10 y te digo cuantas cifras tiene en base 16: "; 
    cin >> numero; 

    if(numero == 0){
        cifras++;
    }
    if(numero < 0){
        numero = numero * -1;
    }
    for(i = numero; i > 0;){
        cifras++;
        i = i / 16;
    }
    
    cout << "Tu numero tiene " << cifras << " cifras cabezon." << endl;

    return  0; 
}