#include <iostream>
#include <stdlib.h>
using namespace std;

class Empleado {
private:
    int Horas_normales, Horas_extras;
public:
    void cargar(); //Pedirá por teclado las horas normales y las horas extras trabajadas.
    float nomina(); //Devolverá el sueldo que cobrará después de la retención.
};

void Empleado::cargar(){
    cout << "\n\n\tIntroduzca las horas trabajadas laborales: "; cin >> Horas_normales;
    cout << "\tIntroduzca las horas trabajadas extraordinarias: "; cin >> Horas_extras;
}

float Empleado::nomina(){
    float FacturaSinR, FacturaConR;
    FacturaSinR = (Horas_normales*5)+(Horas_extras*8);
    FacturaConR = FacturaSinR - (FacturaSinR*0.15);
    return FacturaConR;
}

int main(){
    Empleado M;
    M.cargar;
    M.nomina;
    cout << "La factura es de " << M.nomina << " euros.\n\n";

    system ("pause");
    return 0;
}