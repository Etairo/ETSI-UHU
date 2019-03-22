#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){

    //Declaramos 2 variables, theory_score = nota teórica; practical_score = nota práctica.
    float theory_score, practical_score;

    cout << "\n\n\tIntroduzca la nota teorica: ";   cin >> theory_score;
    cout << "\tIntroduzca la nota practica: ";      cin >> practical_score;

    /*Hay varias formas de hacer este ejercicio. Yo me centro en hacerlo de la siguiente manera:
    Poniendo una condición en caso de que theory_score y practical_score sean mayor o igual que 0 y menor o igual que 10.*/

    if ((theory_score>=0 && theory_score<=10) && (practical_score>=0 && practical_score<=10)){
         cout << "\n\tLa nota final obtenida es: " << (theory_score*0.7)+(practical_score*0.3) << "\n" << endl;
    }
    else { //Si no se cumple la condición del if.
        cout << "\n\tSolo estan permitidos valores entre el rango [1-10]\n" << endl;        
    }

    system ("pause");
    return 0;
}