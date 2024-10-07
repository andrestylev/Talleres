#include <iostream>

using namespace std;

int main() {
    double capital, intereses, tasaAnual;
    int semanas, diasTotal;

    cout << " Ingrese capital a depositar: ";
    cin >> capital;
    cout << " Ingrese tasa de interes anual (en %): ";
    cin >> tasaAnual;
    cout << " Ingrese la duración del deposito (en semanadas de 7dias): ";
    cin >> semanas;

    diasTotal = semanas * 7;
    double tasaDiaria = tasaAnual / 100 / 365;
    intereses = capital * pow(1 + tasaDiaria, diasTotal);

    cout << "El capital total acumulado al final del periodo es: " << intereses << " euros" << endl;

    return 0;
}