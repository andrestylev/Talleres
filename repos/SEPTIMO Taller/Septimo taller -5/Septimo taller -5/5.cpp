#include <iostream>
using namespace std;

int main() {
	double totalMinutos, extra;

	cout << "duracion de la llamada: ";
	cin >> totalMinutos;
	cout << endl;

	if (totalMinutos <= 3.0) 
	{
		cout << "valor de llamada estandar:	" << 100;
	}
	else
	{
		extra = totalMinutos - 3;
		cout << "valor llamada con recargo: " << 100 + (extra * 120);
	}
	cout << endl;

	return 0;
}