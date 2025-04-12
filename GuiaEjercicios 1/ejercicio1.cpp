#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    double p {25.4};    
    double numero; 

    cout << "Pone la medida en milimetros: "; 
    cin >> numero; 
    cout << "Tu medida en pulgadas es = " << numero/p << "\"" << endl;

    return 0;
}