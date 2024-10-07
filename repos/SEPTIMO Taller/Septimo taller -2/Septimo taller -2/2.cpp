#include <iostream>

using namespace std;

int main() {
	double valor;

	cout << "valor a calcular: ";
	cin >> valor;
	cout << endl;
	if (valor >= 100)
	{
		cout << "total valor con descuento del 10%: " << valor - (valor * 0.10) << endl;
	}
	else
	{
		cout << "total valor con descuento dek 2%: " << valor - (valor * 0.02) << endl;
	}
	return 0;
}