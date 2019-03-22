#include <iostream> //Esta libreria sirve para el flujo de datos. Tanto de entrada como de salida. Siempre hay que ponerla.
#include <stdlib.h> //Esta libreria aun no hace falta saber lo que hace. Yo la tengo que implementar porque trabajo con VSCode.
using namespace std; //Esta libreria nos permite escribir codigo sin la necesidad de poner std:: delante de cada cout.

int main(){

    //Declaramos tres variables. "valorof_x" para el primer numero, "valorof_y" para el segundo numero, y "valorof_aux" para hacer el intercambio.
    int valorof_x, valorof_y, valorof_aux;

    cout << "\n\n\tIntroduzca el valor de x: "; cin >> valorof_x; //Introducimos el primer numero (x).
    cout << "\tIntroduzca el valor de y: ";   cin >> valorof_y; //Introducimos el segundo numero (y).
    cout << "\n\tValor de x: " << valorof_x << endl //Imprime el valor inicial de "x", que es aquel valor que hemos introducido en "valorof_x".
         << "\tValor de y: " << valorof_y << endl; //Imprime el valor inicial de "y", que es aquel valor que hemos introducido en "valorof_y".

    valorof_aux = valorof_x; //La variable "valorof_aux" la utilizamos para guardar la variable "valorof_x".
    valorof_x = valorof_y; //Intercambia el valor de "valorof_x" por su nuevo valor, que es el valor de "valorof_y".
    valorof_y = valorof_aux; //Intercambia el valor de "valorof_y" por su nuevo valor, que es el valor de "valorof_aux", que a su vez, era el valor inicial que teniamos en "valorof_x".

    cout << "\n\tNuevo valor de x: " << valorof_x << "\n\tNuevo valor de y: " << valorof_y << "\n" << endl; //Imprime los nuevos valores de "x" e "y".

    system ("pause");
    return 0;
}

/*No hacen falta las lineas de codigo 2 y 21 al principio si trabajais con CodeBlocks,
ya ireis viendo lo que es y lo que hace. Como utilizo VSCode  me crea un ejecutable (.exe)
automaticamente y para que no se cierre estoy obligado a ponerlo.*/