#include <iostream> //Esta libreria sirve para el flujo de datos. Tanto de entrada como de salida. Siempre hay que ponerla.
#include <stdlib.h> //Esta libreria aun no hace falta saber lo que hace. Yo la tengo que implementar porque trabajo con VSCode.
using namespace std; //Esta libreria nos permite escribir codigo sin la necesidad de poner std:: delante de cada cout.

int main(){

    int x, y, aux; //Declaramos tres variables. "x" para el primer numero, "y" para el segundo numero, y "aux" para hacer el intercambio.

    cout << "\n\n\tIntroduzca el valor de x: "; cin >> x; //Introducimos el primer numero.
    cout << "\tIntroduzca el valor de y: ";   cin >> y; //Introducimos el segundo numero.
    cout << "\n\tValor de x: " << x << endl //Imprime el valor de "x" inicial, que es aquel valor que hemos introducido en "x".
         << "\tValor de y: " << y << endl; //Imprime el valor de "y" inicial, que es aquel valor que hemos introducido en "y".

    aux = x; //La variable "aux" la utilizamos para guardar la variable "x".
    x = y; //Intercambia el valor de "x" por su nuevo valor, que es el valor de "y".
    y = aux; //Intercambia el valor de "y" por su nuevo valor, que es el valor de "aux", que a su vez, era el valor inicial que teniamos en "x".

    cout << "\n\tNuevo valor de x: " << x << "\n\tNuevo valor de y: " << y << "\n\n" << endl; //Imprime los nuevos valores de "x" e "y".

    system ("pause");
    return 0;
}

/*No hacen falta las lineas de codigo 2 y 10 al principio si trabajais con CodeBlocks,
ya ireis viendo lo que es y lo que hace. Como utilizo VSCode  me crea un ejecutable (.exe)
automaticamente y para que no se cierre estoy obligado a ponerlo.*/