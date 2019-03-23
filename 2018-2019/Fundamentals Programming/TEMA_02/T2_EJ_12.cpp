#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){

    //Declaramos 2 variables de tipo real. "Celsius" para los grados centígrados y "Fahrenheit" para los grados fahrenheit.
    float Celsius, Fahrenheit;

    //Introducimos el valor que queremos convertir en grados Celsius.
    cout << "\n\n\tIntroduzca la temperatura en grados Celsius: ";  cin >> Celsius;
    
    //Convertimos los grados Celsius en grados Fahrenheit mediante la siguiente operación:
    Fahrenheit = (float) 9/5*Celsius+32;

    //Muestra el resultado obtenido de la operación que hemos hecho anteriormente.
    cout << "\n\t" << Celsius << " grados Celsius son " << Fahrenheit << " grados Fahrenheit.\n" << endl;

    system ("pause");
    return 0;
}