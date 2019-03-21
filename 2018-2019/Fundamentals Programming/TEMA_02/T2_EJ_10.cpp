#include <iostream>
#include <math.h>
#include <stdlib.h>
#define pi 3.14 //Definimos el numero pi.
using namespace std;

int main(){

    int radio;

    cout << "\n\n\tIntroduzca la longitud del radio: "; cin >> radio;
    cout << "\n\tLongitud: " << 2*pi*radio << endl
         << "\tSuperficie: " << pi*pow(radio,2) << endl
         << "\tVolumen: " << (float) (4*pi*pow(radio,3))/3 << "\n" << endl;

    system ("pause");
    return 0;
}