#include <iostream>
#include <vector>
#include <string> 

using namespace std; 

int main(){
    int valores[3];
    int posicion;
    int i;
    int j;  

    cout << "Ingrese tres valores y te los ordeno de forma creciente: "; 
    cin >> valores[0]; 
    cout << "el segundo: "; 
    cin >> valores[1]; 
    cout << "y el tercero: "; 
    cin >> valores[2];

    cout << "Vos los ingresaste asi: ";
    for(i = 0; i < 3; i++){
        cout << valores[i];
    } 
    cout << endl;

    //Bubble Sort
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2 - i; j++){
            if(valores[j] > valores[j + 1]){
                posicion = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = posicion;  
                //swap(&valores[j], &valores[j + 1]);
            }
        }
    }

    cout << "Por lo que de manera creciente seria asi: ";
    for(i = 0; i < 3; i++){
        cout << valores[i];
    } 
    cout << endl;
    
    return 0; 
}