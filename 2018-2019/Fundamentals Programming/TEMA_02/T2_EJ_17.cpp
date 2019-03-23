#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    //Declaramos las variables.
    int longitud_en_metros = 15000, Precio_total_en_euros;

    //Recuarda quitar a uno de las dos expresiones los "//" para que funcione el programa.
    //Precio_total_en_euros = 5000*(longitud_en_metros/5280.0);
    //Precio_total_en_euros = 5000*(longitud_en_metros/5280);
    
    //Imprimimos por pantalla el resultado.
    cout << "\n\n\tPRECIO TOTAL: " << Precio_total_en_euros << "\n\n";

    /*Cuando utilizamos la expresión con el 5280.0, la división se realizará de forma real.
    En cambio si utilizamos la otra expresión, ésta sale de forma entera. La diferencia es
    que en la primera el resultado va a ser más exacto a su valor real y en la segunda el
    resultado va a ser menos exacto porque no cuenta los decimales de la división.*/

    system ("pause");
    return 0;
}