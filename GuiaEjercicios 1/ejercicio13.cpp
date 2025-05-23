#include <iostream>

using namespace std; 

int main(){
    unsigned long long arroz = 1; // omito el 2^0 poniendo 1 porque depsues cuando lo multiplico por 2 me caga
    unsigned long long todo = 1;
    int i;
    // (2^64)-1, es decir,  2^1+ 2^2+ 2^3+...+2^63 = 2^64-1

    for (i = 2; i < 65; i++){ // se acostumbra a poner un limite de hasta donde no puedo llegar (costumbre) 
        arroz = arroz * 2; // cuando hace la ultima iteracion se me pone en cero el arroz porque no entra en la variable
        todo += arroz;  
    }

    cout << "La cantidad de arroz es: " << todo << endl; 

    return 0;
}