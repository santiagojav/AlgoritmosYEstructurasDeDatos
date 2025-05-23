#include <iostream>

using namespace std;

bool bisiesto(int anio){
    if(anio < 1582 ){ // se va del calendario gregoriano
        return false; 
    }
    return(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)); 
}

int main(){
    int anio;

    cout << "Ingresa un anio y te digo si es bisiesto ono: "; 
    cin >> anio; 
    if(bisiesto(anio)){
        cout << "El anio es Bisiesto cabezon" << endl; 
    } else{
        cout << "No es Bisisesto cmapeon" << endl;
    }

    return 0; 
}