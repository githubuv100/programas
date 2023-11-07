#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int* pointvar;
    pointvar = &var;

    cout << "var = " << var << endl;
    cout << "dirección de la variable var = " << &var << endl << endl;
    cout << "apuntador pointvar = " << pointvar << endl << endl;

    cout << "Cambia el valor de var a 7:" << endl << endl;
    var = 7;
    cout << "var = " << var << endl << endl;
    cout << "pointvar = " << *pointvar << endl << endl;

    *pointvar = 16; // Corregido de *poinbar a *pointvar

    cout << "var = " << var << endl << endl;
    cout << "apuntador de pointvar = " << pointvar << endl;
    cout << "*pointvar = " << *pointvar << endl;

    return 0;
}
