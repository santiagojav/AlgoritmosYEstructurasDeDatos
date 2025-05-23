#include <iostream>

using namespace std;

void serruchado(int fecha, int dia, int mes, int anio){

    anio = fecha / 10000;
    mes = (fecha / 100) % 100;
    dia = fecha % 100;
}

int main(){
    int fecha, dia, mes, anio;

    cout << "Ingresa una fecha con formato AAAAMMDD: "; 
    cin >> fecha;

    serruchado(fecha, dia, mes, anio);
// variante
/* cout << "fecha formato." << setw(2) << setfill('0')*/
    cout << "Fecha formateada (DD/MM/AAAA): ";
        if (dia < 10){cout << "0";
        cout << dia << "/";
        }
        if (mes < 10){cout << "0";
        cout << mes << "/";
        }
        
        cout << anio << endl;
            
    return 0; 
}