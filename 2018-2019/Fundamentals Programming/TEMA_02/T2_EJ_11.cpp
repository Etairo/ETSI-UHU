#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    //Declaramos 3 variables, de las cuales 2 son constantes, y cuyo valor "no se puede cambiar".
    const float euro_dollar = 1.14, euro_libra = 0.86;
    float euros;

    //Introducimos la cantidad que queramos convertir en euros.
    cout << "\n\n\tIntroduzca la cantidad en euros: ";  cin >> euros;

    //Hacemos 2 operaciones: "euros*euro_dollar" para convertir los euros en dólares y "euros*euro_libra" para convertir los euros en libras.
    cout << "\n\t" << euros << " euros son: " << euros*euro_dollar << " dolares y " << euros*euro_libra << " libras esterlinas\n" << endl;

    system ("pause");
    return 0;
}