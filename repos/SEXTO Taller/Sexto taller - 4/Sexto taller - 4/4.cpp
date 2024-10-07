#include <iostream>

using namespace std;

int main() {
	int horaEntrada, horaSalida, Totalhoras;
	double montoPagar;

	cout << "hora de entrada (formato 24h): ";
	cin >> horaEntrada;
	cout << "hora de salida (formato 24h): ";
	cin >> horaSalida;
	cout << "\n";
	if ((horaEntrada < 0 || horaEntrada > 24) || (horaSalida < 0 || horaSalida > 24))
	{
		cout << "no valido" << "\n";
		return 0;
	} 	
	Totalhoras = horaSalida - horaEntrada;
			
	if (Totalhoras < 0) {
		Totalhoras = Totalhoras + 24;
	}
	if (Totalhoras <= 1)
	{
		montoPagar = 3500;
	}
	else 
	{
		montoPagar = 3500 + (Totalhoras - 1) * 5000;
	}
	cout << "monto a pagar de estacionamiento: " << montoPagar << endl;
	
	return 0;
}