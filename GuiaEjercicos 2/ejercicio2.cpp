#include <iostream>

using namespace std;

int comprimir(int d, int m, int a){
    if(m > 12){
        return(0);
    }else if(d > 31){
        return(0);
    }
    return(a * 10000 + m * 100 + d);
}
/*int check(int numero){
    if(numero == 0){
        return cout << "Ingresaste caulquier cosa. Ponelo bien " << endl;
    }else{
        return cout << "toma campeon: " << numero << endl;
    }
}*/

int main(){
    int dia, mes, anio;
    char barra;

    cout << "ingresa un dia: ";
    cin >> dia; 
    cout << "ingresa un mes: "; 
    cin >> mes; 
    cout << "ingresa el anio: ";
    cin >> anio; 

    /* Variante
    cout << "Ingresa la fecha con el formato(d/m/a): ";
    cin >> dia >> barra >> mes >> barra >> anio;*/
    
    int res = comprimir(dia, mes, anio);
    //int ressPlus = check(res);

    (res == 0) ? cout << "Ingresaste caulquier cosa. Ponelo bien " << endl:
        cout << "toma campeon: " << res << endl;

    return 0; 
}