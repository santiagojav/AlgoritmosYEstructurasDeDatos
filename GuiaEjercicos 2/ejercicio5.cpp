#include <iostream>

using namespace std;

int sumatoria(int principio, int fin){
    int total;

    // manera recursiva
    if(fin <= principio){
        return fin; 
    }else{
        total = fin + sumatoria(principio, fin - 1); 
        return total; 
    }
    // manera for
    //for(; principio <= fin; ++principio){
    //    total = total + principio; 
    //} 
    //return(total);
}

int main(){
    int inicio, final; 

    cout << "Ingrese donde empieza sumatoria Gaussiana: ";
    cin >> inicio; 
    cout << "Ingrese hasta donde llega: "; 
    cin >> final; 
    
    int res = sumatoria(inicio, final); 

    cout << "El total de la sumatoria seria: " << res << endl; 

    return 0; 
}