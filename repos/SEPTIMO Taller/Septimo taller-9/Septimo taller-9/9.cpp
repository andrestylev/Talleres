#include <iostream>
using namespace std;

int main() {
	int horaEntrada, horaSalida, totalMinutos, minutosEntrada, minutosSalida, minutosExtra;
	double montoPagar;
	cout << "hora y minutos de entrada (formato 24h)(00 00): "; 
	cin >> horaEntrada >> minutosEntrada;
	if (cin.fail())
	{
		cout << "¡valor(es) no validos!" << endl;
		return 1;
	}
	cout << endl;
	cout << "hora y minutos de salida (formato 24h)(00 00): ";
	cin >> horaSalida >> minutosSalida;
	cout << endl;
	if (cin.fail())
	{
		cout << "¡valor(es) no validos!" << endl;
		return 1;
	}
	if (horaEntrada >= 24 || horaSalida >= 24)
	{
		cout << "¡valor(es) no validos!" << endl;
		return 1;
	}
	if (minutosEntrada > 60 || minutosSalida > 60)
	{
		cout << "¡valor(es) no validos!" << endl;
		return 1;
	}
	totalMinutos = (horaSalida * 60 + minutosSalida) - (horaEntrada * 60 + minutosEntrada);

	if (totalMinutos < 0)
	{
		totalMinutos = totalMinutos + 24 * 60;
	}
	if (totalMinutos <= 60)
	{
		montoPagar = 3500;
	}
	else
	{
		montoPagar = 3500;
		minutosExtra = totalMinutos - 60;
		montoPagar += ((minutosExtra + 14) / 15) * 1250;
	}
     cout << "Pago por el estacionamiento: " << montoPagar << endl;

return 0;
}