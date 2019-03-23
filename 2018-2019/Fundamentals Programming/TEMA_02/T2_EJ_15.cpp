#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    //Declaramos las variables.
    int a, b, c, d, e, f;
    float x, y;

    //Introducimos el valor de las variables para hacer el sistema.
    cout << "\n\n\tIntroduzca los valores [a-f]: ";
    cin >> a >> b >> c >> d >> e >> f;

    //Realizamos las operaciones necesarias y se imprime por pantalla el resultado.
    x = ((c*e)-(b*f))/((a*e)-(b*d));
    y = ((a*f)-(c*d))/((a*e)-(b*d));
    cout << "\n\tEl valor de X = " << x << endl << "\tEl valor de Y = " << y << "\n\n";

    system ("pause");
    return 0;
}