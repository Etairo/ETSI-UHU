#include <iostream> //Esta libreria sirve para el flujo de datos. Tanto de entrada como de salida. Siempre hay que ponerla.
#include <stdlib.h> //Esta libreria aun no hace falta saber lo que hace. Yo la tengo que implementar porque trabajo con VSCode.
using namespace std; //Esta libreria nos permite escribir codigo sin la necesidad de poner std:: delante de cada cout.

int main(){

    int number; //Hemos creado una variable de tipo entero para que posteriormente podamos introducir un número.

    cout << "\n\n\tIntroduzca un numero: "; cin >> number; //Introducimos un numero de tipo entero.
    cout << "\n\tEl resultado es igual a: " << number + 5 << "\n" << endl; //Imprime el valor total.
    
    system("pause");
    return 0;
}

/*No hacen falta las lineas de codigo 2 y 12 al principio si trabajais con CodeBlocks,
ya ireis viendo lo que es y lo que hace. Como utilizo VSCode  me crea un ejecutable (.exe)
automaticamente y para que no se cierre estoy obligado a ponerlo.*/