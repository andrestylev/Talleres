#include <iostream>
using namespace std;

int main() {
	double horaEntrada, horaSalida, totalHoras;

	cout << "hora de entrada (formato 24h): ";
	cin >> horaEntrada;
	cout << "hora de salida (formato 24h): ";
	cin >> horaSalida;
	cout << endl;
	totalHoras = horaSalida - horaEntrada;
	if (horaEntrada >= 24 || horaSalida >= 24)
	{
		cout << "¡valor(es) no validos!" << endl;
		return 0;
	}
	if (totalHoras < 0)
	{
		totalHoras = totalHoras + 24;
	}
	if (totalHoras <= 1)
	{
		cout << "monto a pagar por el estacionamineto: " << 3500;
	}
	else
	{
		if (totalHoras > 1)
		{
			cout << "monto a pagar por el estacionamiento: " << 3500 + (totalHoras - 1) * 5000 << endl;
		}
	}
	return 0;
}