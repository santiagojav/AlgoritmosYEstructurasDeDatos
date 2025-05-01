#include <iostream>
#include <vector>
#include <string>

using namespace std; 

int main(){
    int a = 12, b = 20, x;

    cout << "Ahora \"a\" vale: " << a << '\n'<< "y \"b\" vale: " << b << '\n';
    x = a;
    a = b;
    b = x;
    // sawp(a,b); 
    // a,b = b,a;
    cout << "Pero ahora \"a\" vale: " << a << '\n'<< "y \"b\" vale: " << b ;

    return 0; 
}
