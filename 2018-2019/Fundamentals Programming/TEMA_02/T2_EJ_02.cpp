#include <iostream> //Esta libreria sirve para el flujo de datos. Tanto de entrada como de salida. Siempre hay que ponerla.
#include <stdlib.h> //Esta libreria aun no hace falta saber lo que hace. Yo la tengo que implementar porque trabajo con VSCode.
using namespace std; //Esta libreria nos permite escribir codigo sin la necesidad de poner std:: delante de cada cout.

int main(){

    int numero, total; //Hemos creado dos variables de tipo entero. Una para introducir el numero, y otra para la suma total de dicho numero + 5.

    cout << "\n\n\tIntroduzca un numero: "; cin >> numero; //Introducimos un numero cualquiera de tipo entero.
    cout << "\n\tEl numero introducido es igual a: " << numero + 5 << "\n" << endl; //Imprime el valor total.
    
    system("pause");
    return 0;
}

/*No hacen falta las lineas de codigo 2 y 14 al principio si trabajais con CodeBlocks,
ya ireis viendo lo que es y lo que hace. Como utilizo VSCode  me crea un ejecutable (.exe)
automaticamente y para que no se cierre estoy obligado a ponerlo.*/