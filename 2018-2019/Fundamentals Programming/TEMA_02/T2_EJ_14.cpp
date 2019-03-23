#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    //Declaramos las variables para las notas.
    float TestScore1, TestScore2, TestScore3, TestScore4, TestScore5, Average;

    //Introducimos las notas con las variables declaradas.
    cout << "\n\n\tIntroduzca las cinco notas. NOTAS: ";
    cin >> TestScore1 >> TestScore2 >> TestScore3 >> TestScore4 >> TestScore5;

    //Escribimos la media de las notas y se imprime por la pantalla.
    Average = (TestScore1+TestScore2+TestScore3+TestScore4+TestScore5)/5;
    cout << "\n\tLa media de las notas introducidas. MEDIA: " << Average << "\n\n";

    system ("pause");
    return 0;
}