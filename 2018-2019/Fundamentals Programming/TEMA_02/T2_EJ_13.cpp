#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){

    //Declaramos las variables que necesitamos para el ejercicio.
    int a, b, c;
    float solution1, solution2;

    //Introducimos los valores de "a", "b" y "c" para poder resolver la ecuación de segundo grado.
    cout << "\n\n\tVamos a resolver la siguiente ecuacion: ax^2+bx+c=0" << endl
         << "\n\tIntroduzca los valores de a, b y c: "; cin >> a >> b >> c;
    
    //Realizamos un condicional if-else para resolver la ecuación de segundo grado.
    if ((double) sqrt(pow(-b,2)-(4*a*c)) == 0){ //Condición a realizar si la raíz es igual a 0.
        solution1 = (float) -b/(2*a);
        cout << "\n\tSOLUCION UNICA: X = " << solution1 << "\n" << endl;
    }
    else { //Condición a realizar en el caso de que la raíz sea distinto de 0.
        solution1 = (double) ((-b) + (sqrt(pow(-b,2)-(4*a*c)))/(2*a));
        solution2 = (double) ((-b) - (sqrt(pow(-b,2)-(4*a*c)))/(2*a));
        cout << "\n\tSOLUCIONES:\n\tX1 = " << solution1 << "\n\tX2 = " << solution2 << "\n" << endl;
    }

    system ("pause");
    return 0;
}