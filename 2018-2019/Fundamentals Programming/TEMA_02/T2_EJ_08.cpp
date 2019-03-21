#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int n1, n2;

    cout << "\n\n\tIntroduzca el numero 1: ";   cin >> n1;
    cout << "\tIntroduzca el numero 2: ";   cin >> n2;
    cout << "\n\tSuma: " << n1 << " + " << n2 << " = " << n1+n2 << endl
         << "\tResta: " << n1 << " - " << n2 << " = " << n1-n2 << endl
         << "\tProducto: " << n1 << " * " << n2 << " = " << n1*n2 << endl
         << "\tCociente: " << n1 << " / " << n2 << " = " << (float) n1/n2 << "\n" << endl;

    cout.precision(3); //Sirve para redondear/truncar (2 decimales si el numero entero es mayor que 0 y 3 decimales si el numero entero es 0).
    system ("pause");
    return 0;
}