#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int bultosStock; // tengo 43 bultos en stock
    int bultosCaja; // max 5 bultos
    int cajasCompletas; 
    int resto;

    cout << "Ingresa un valor de Stock: ";
    cin >> bultosStock;

    cout << '\n' << "Ingresa cuantos bultos entrarian por caja: "; 
    cin >> bultosCaja;

    if(bultosCaja = 0){
        cout << "pone bien los datos, pero tu resultado seria: " << bultosStock << endl; 
    }

    cajasCompletas = bultosStock / bultosCaja;
    resto = bultosStock % bultosCaja; 

    cout << '\n' << "Se pudieron completar " << cajasCompletas << " cajas. :D" << '\n' << endl;

    if(resto > 0){
        cout << "Te sobraron " << resto << " bultos que no se donde te los vas a meter." << endl;
    } else {
        cout << " No te sobró nada campeón, bien ahí." << '\n' << endl;
    }    
    return 0; 
}