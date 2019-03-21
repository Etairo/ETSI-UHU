#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){

    float nt, np, nf; //nt = nota teórica; np = nota práctica; nf = nota final.

    cout << "\n\n\tIntroduzca la nota teorica: ";   cin >> nt;
    cout << "\tIntroduzca la nota practica: ";      cin >> np;

    //Podemos hacer el programa de dos maneras diferentes, que se verá a continuación.

    /*if ((nt<0 || nt>10) || (np<0 || np>10)){ //Condición en la que, nt o np tienen que ser < que cero o > que 10 para que se cumpla la condición.
        cout << "\n\tSolo estan permitidos valores entre el rango [1-10]\n\n" << endl;
    }
    else { //Caso en el que no se cumpla la condición del if.
        cout << "\n\tLa nota final obtenida es: " << (nt*0.7)+(np*0.3) << "\n\n" << endl;
    }*/

    if ((nt>=0 && nt<=10) && (np>=0 && np<=10)){ //Condición en la que nt y np tienen que ser >= que cero y <= que diez, y que esas condiciones para nt y np se cumplan a la vez.
         cout << "\n\tLa nota final obtenida es: " << (nt*0.7)+(np*0.3) << "\n" << endl;
    }
    else { //Caso en el que no se cumpla la condición del if.
        cout << "\n\tSolo estan permitidos valores entre el rango [1-10]\n" << endl;        
    }

    system ("pause");
    return 0;
}