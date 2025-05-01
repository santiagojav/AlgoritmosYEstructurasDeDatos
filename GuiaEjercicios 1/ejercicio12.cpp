#include <iostream>

using namespace std;

int main(){ 
    float numero = 0; 
    string valor;

    do{
        cout << "Mete un numero, o cero si no queres hacer nada: "; 
        cin >> numero;
        
        // (a) (numero >= 0) ? cout << "positivo" << endl:
        (numero > 0) ? cout << "positivo" << endl:
        (numero < 0) ? cout << "negativo" << endl: 
            cout << "0 cabezon." << endl;  // en el caso (b) borro esta linea

    } while (numero != 0);
    
    return 0; 
}
