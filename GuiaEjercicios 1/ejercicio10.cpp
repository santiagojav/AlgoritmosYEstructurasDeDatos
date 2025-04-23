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

    if(numero < 0){
        numero = numero * -1;
    }
    for(i = numero; i > 0;){
        cifras++;
        i = i / 10;
    }    
    cout << "Tu numero tiene " << cifras << " cifras." << endl;
}