#include <iostream> 
#include <cassert> // libreria del assert

using namespace std;
//static assett(siseof(long) == 8
//assert(cuatro == 4); 

float convert(int farenheit){
    
    assert(farenheit > -459.67);
    return((farenheit - 32) * 5/9);
}

int main(){
    float farenheit;

    cout << "Ingrese la temperatura en Farenheit: "; 
    cin >> farenheit; 

    float celcius = convert(farenheit);
    
    cout << "Serian: " << celcius << "grados" << endl; 

    return 0; 
}