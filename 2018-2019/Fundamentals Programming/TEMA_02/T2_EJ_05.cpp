#include <iostream> //Esta libreria sirve para el flujo de datos. Tanto de entrada como de salida. Siempre hay que ponerla.
#include <stdlib.h> //Esta libreria aun no hace falta saber lo que hace. Yo la tengo que implementar porque trabajo con VSCode.
using namespace std; //Esta libreria nos permite escribir codigo sin la necesidad de poner std:: delante de cada cout.

int main(){

    int bytes; //Declaracion de la variable "bytes" de tipo entero.
    float kbytes; //Declaracion de la variable "kbytes" de tipo real.

    cout << "\n\n\tIntroduzca el numero de Bytes a convertir: ";  cin >> bytes; //Nos pide el valor de bytes a convertir.
    kbytes = (float) bytes/1024; //La operacion que convierte los Bytes en Kbytes.
    cout << "\n\t" << bytes << " Bytes = " << kbytes << " Kbytes.\n" << endl; //Imprime el valor de Bytes convertido en Kbytes.

    system ("pause");
    return 0;
}

/*No hacen falta las lineas de codigo 2 y 14 al principio si trabajais con CodeBlocks,
ya ireis viendo lo que es y lo que hace. Como utilizo VSCode  me crea un ejecutable (.exe)
automaticamente y para que no se cierre estoy obligado a ponerlo.*/