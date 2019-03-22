#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    //Declaramos las variables de tipo entero "number1" para el primer número y "number2" para el segundo número.
    int number1, number2;

    //Introducimos los valores "number1" y "number2".
    cout << "\n\n\tIntroduzca el numero 1: ";cin >> number1;
    cout << "\tIntroduzca el numero 2: "; cin >> number2;

    //Ahora escribimos todas las operaciones que debe realizar.
    cout << "\n\tSuma: " << number1 << " + " << number2 << " = " << number1+number2 << endl
         << "\tResta: " << number1 << " - " << number2 << " = " << number1-number2 << endl
         << "\tProducto: " << number1 << " * " << number2 << " = " << number1*number2 << endl
         << "\tCociente: " << number1 << " / " << number2 << " = " << (float) number1/number2 << "\n" << endl;

    cout.precision(3); //Sirve para redondear/truncar (2 decimales si el numero entero es mayor que 0 y 3 decimales si el numero entero es 0).
    system ("pause");
    return 0;
}