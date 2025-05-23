#include <iostream>
#include <cassert> 

using namespace std; 

int cuenta(int num1, int num2){ 
    int t = 0; 
    int i = 0;

    assert(num2 <= 9 && num2 >= 0); 
    
    while (num1 > 0){
        i = num1 % 10;
        num1 = num1 / 10;
        if(i == num2){
            t++; 
        }
    }
    return t;
}

int main(){ 
    int n1, n2; 

    cout << "Ingrese un numero dentro de los Naturales positivos que quiera: "; 
    cin >> n1; 
    cout << "Ingrese un numero de un digito: "; 
    cin >> n2; 

    int res = cuenta(n1, n2); 
    
    cout << "El numero " << n2 << " se repite " << res << " veces en el numero " << n1 << endl; 

    return 0; 
}