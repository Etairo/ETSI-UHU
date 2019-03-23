#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    //Declaramos las variables. seconds = segundos, minutes = minutos, hours = horas.
    int input_seconds, seconds, minutes, hours;

    //Nos pide por pantalla los segundos que queramos convertir en horas, minutos y segundos.
    cout << "\n\n\tIntroduzca los segundos a convertir: "; cin >> input_seconds;

    //Operaciones para convertir los segundos en horas, minutos y segundos.
    minutes = input_seconds/60; //Devuelve los minutos (sin el resto) de la división (input_seconds/60) = 61 minutos.
    seconds = input_seconds%60; //Devuelve el resto de la división (input_seconds/60) = 41 segundos.
    hours = minutes/60; //Devuelve las horas (sin el resto) de la división (minutes/60) = 1 horas.
    minutes%=60; //Devuelve el resto de la división (minutes/60) = 1 minuto.

    //Imprime por pantalla el resultado de las operaciones realizadas.
    cout << "\n\t" << input_seconds << " segundos son " << hours << " horas, " << minutes << " minutos y " << seconds << " segundos.\n\n";

    system ("pause");
    return 0;
}