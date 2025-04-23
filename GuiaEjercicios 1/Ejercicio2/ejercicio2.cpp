#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int numero;    
    enum dias {Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};  
    
    cout << "Pone el numero que quieras y te digo que dia de la semana es: "; 
    cin >> numero;    

    if(numero == Lunes){
        cout << "El dia es: Lunes" << endl; 
     }
     else if(numero == Martes){
        cout << "El dia es: Martes" << endl;
     }
     else if(numero == Miercoles){
        cout << "El dia es: Miercoles" << endl;
     }
     else if(numero == Jueves){
        cout << "El dia es: Jueves" << endl;
     }
     else if(numero == Viernes){
        cout << "El dia es: Viernes" << endl;
     }
     else if(numero == Sabado){
        cout << "El dia es: Sabado" << endl;
     }
     else if(numero == Domingo){
        cout << "El dia es: Domingo" << endl;
     }
     else{
        cout << "Pusiste un numero que no va, la semana tiene 7 dias nada mas gordo..." << endl;
     }

    return 0; 
}