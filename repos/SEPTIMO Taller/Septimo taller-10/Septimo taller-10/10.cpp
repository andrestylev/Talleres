#include <iostream>
using namespace std;

int main() {
	int valorEntrada;
	double boletosnum;
	cout << "numero de boletos a comprar (max 4): ";
	cin >> boletosnum;
	if (cin.fail())
	{
		cout << "Error";
		return 1;
	}
	if (boletosnum > 4 || boletosnum < 1)
	{
		cout << "no valido (min boletos:1 max:4)";
		return 1;
	}
	cout << "valor del boleto: ";
	cin >> valorEntrada;
	cout << endl;
	if (boletosnum == 1)
	{
		cout << "valor de una entrada = " << valorEntrada << endl;
	}
	if (boletosnum == 2)
	{
		cout << "valor final de los dos boletos = " << (valorEntrada * 2 * 0.10) + (valorEntrada * 2);
	}
	if (boletosnum == 3)
	{
		cout << "valor final de los tres boletos = " << (valorEntrada * 3 * 0.15) + (valorEntrada * 3);
	}
	if (boletosnum == 4)
	{
		cout << "valor final de los cautro boletos = " << (valorEntrada * 4 * 0.20) + (valorEntrada * 3);
	}
	return 0;
}