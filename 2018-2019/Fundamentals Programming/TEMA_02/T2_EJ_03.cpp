#include <iostream> //Esta libreria sirve para el flujo de datos. Tanto de entrada como de salida. Siempre hay que ponerla.
#include <stdlib.h> //Esta libreria aun no hace falta saber lo que hace. Yo la tengo que implementar porque trabajo con VSCode.
using namespace std; //Esta libreria nos permite escribir codigo sin la necesidad de poner std:: delante de cada cout.

int main(){

    int primero, segundo, tercero; //Declarando 3 variables de tipo entero.

    cout << "\n\n\t" << primero << "\n\t" << segundo << "\n\t" << tercero << "\n\n" << endl; //Imprime los valores de "primero", "segundo" y "tercero".

    system ("pause");
    return 0;
}

/*En este caso nos ha devuelto 3 valores de tipo entero. Aunque no habiamos asignado ningun valor
a las tres variables, estas por si ya tienen un valor, por eso salen numeros y no errores.*/

/*No hacen falta las lineas de codigo 2 y 10 al principio si trabajais con CodeBlocks,
ya ireis viendo lo que es y lo que hace. Como utilizo VSCode  me crea un ejecutable (.exe)
automaticamente y para que no se cierre estoy obligado a ponerlo.*/