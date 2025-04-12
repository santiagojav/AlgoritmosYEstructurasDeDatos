#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int numero;    
    enum dias {Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};  

    cout << "Pone el numero que quieras y te digo que dia de la semana es: "; 
    cin >> numero;    

    (numero == Lunes) ? cout << "Lunes" << endl: 
    (numero == Martes) ? cout <<"Martes" << endl:
    (numero == Miercoles) ? cout <<"Miercoles" << endl:
    (numero == Jueves) ? cout <<"Jueves" << endl:
    (numero == Viernes) ? cout <<"Viernes" << endl:
    (numero == Sabado) ? cout <<"Sabado" << endl:
    (numero == Domingo) ? cout <<"Domingo" <<endl:
        cout << "Pusiste un numero que no va, la semana tiene 7 dias nada mas gordo..." << endl;  

    return 0; 
}