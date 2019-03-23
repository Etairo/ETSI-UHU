#include <iostream>
#include <math.h>
#include <stdlib.h>
#define pi 3.14 //Definimos el numero pi.
using namespace std;

int main(){

    int radio; //Declaramos las variables.

    cout << "\n\n\tIntroduzca la longitud del radio: "; cin >> radio; //Introducimos el valor del radio de la circunferencia.
    cout << "\n\tLongitud: " << 2*pi*radio << endl //Obtenemos la longitud de la circunferencia.
         << "\tSuperficie: " << pi*pow(radio,2) << endl //Obtenemos la superficie de la circunferencia.
         << "\tVolumen: " << (float) (4*pi*pow(radio,3))/3 << "\n" << endl; //Obtenemos el volumen de la circunferencia.

    system ("pause");
    return 0;
}