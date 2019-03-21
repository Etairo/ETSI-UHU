#include <iostream>
#include <stdlib.h>
#include <math.h> //Biblioteca que se utiliza para hacer operaciones matemáticas más complejas.
using namespace std;

int main(){

    int x1, y1, x2, y2; //Declarando las coordenadas para los dos puntos.
    float distancia; //Declaramos la variable "distancia" de tipo real nada más por las operaciones.

    cout << "\n\n\tIntroduzca las coordenadas del punto P1: ";  cin >> x1 >> y1;
    cout << "\tIntroduzca las coordenadas del punto P2: ";      cin >> x2 >> y2;

    //La distancia entre dos puntos: d(P1,P2) = sqrt ((x2-x1)^2 + (y2-y1)^2), donde "sqrt" es la raiz cuadrada.
    distancia = (float) sqrt((pow(x2-x1,2)) + (pow(y2-y1,2)));
    cout << "\n\tLa distancia entre los dos puntos es: " << distancia << " unidades.\n" << endl;

    system ("pause");
    return 0;
}