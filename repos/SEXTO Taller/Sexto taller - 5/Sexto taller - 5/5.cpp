#include <iostream>

using namespace std;

int main() {
    int horaEntrada, horaSalida, totalHoras, minutos, minutoSalida, minutoEntrada, totalMinutos;
    double montoPagar;

    cout << "hora de entrada (formato 24h): ";
    cin >> horaEntrada;
    cout << "Minuto de entrada: ";
    cin >> minutoEntrada;
    cout << "hora de salida (formato 24h): ";
    cin >> horaSalida;
    cout << "minuto de salida: ";
    cin >> minutoSalida;
    cout << "\n";

    if ((horaEntrada < 0 || horaEntrada > 23) || (minutoEntrada < 0 || minutoEntrada > 59) ||
        (horaSalida < 0 || horaSalida > 23) || (minutoSalida < 0 || minutoSalida > 59)) {
        cout << "no valido" << "\n";
        return 0;
    }
    totalMinutos = (horaSalida * 60 + minutoSalida) - (horaEntrada * 60 + minutoEntrada);
    if (totalMinutos < 0) {
        totalMinutos = totalMinutos + 24 * 60;
    }

    if (totalMinutos <= 60) {
        montoPagar = 3500;
    }
    else
    {
        int minutosExtra = totalMinutos - 60;
        montoPagar = 3500;
        montoPagar += (minutosExtra / 15) * 1250;

        if (minutosExtra % 15 > 0) {
            montoPagar = montoPagar + 1250;
        }
        cout << "pago de estacionamiento: " << montoPagar << endl;
        return 0;
    }
}