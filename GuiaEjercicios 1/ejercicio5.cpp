#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    double ang1;
    double ang2; 
    double ang3; 

    cout << "Ingrese el angulo 1: ";
    cin >> ang1; 

    cout << "Ingrese el angulo 2: "; 
    cin >> ang2; 

    //ang1 + ang2 + ang3 = 180;
    ang3 = 180 - ang1 - ang2; 

    cout << "El angulo que le falta a tu triangulo seria de " << ang3 << " Grados campeón." << endl; 
    return 0;
}
