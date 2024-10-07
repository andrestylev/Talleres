#include <iostream>

using namespace std;

int main() {
	double valorMatricula, totalDescuento = 0, total;
	char certificadoVotacion, deportes, monitor;

	cout << "ingrese el valor de matricula : ";
	cin >> valorMatricula;

	cout << "posee certificado de votacion?  |s = SI|, |n = NO| ";
	cin >> certificadoVotacion;
	if (certificadoVotacion == 's' || certificadoVotacion == 'S')
	{
		totalDescuento = totalDescuento + valorMatricula * 0.10; 
	}

	cout << "participa en actividades ludicas de la institucion?  |s = SI|, |n = NO| ";
	cin >> deportes;
	if (deportes == 's' || deportes == 'S')
	{
		totalDescuento = totalDescuento + valorMatricula * 0.10;
	}

	cout << "pertenece al equipo de monitores auxiliares?  |s = SI|, |n = NO| ";
	cin >> monitor;
	cout << endl;
	if (monitor == 's' || monitor == 'S')
	{
		totalDescuento = totalDescuento + valorMatricula * 0.10;
	}

	total = valorMatricula - totalDescuento;

	cout << "subtotal de descuentos aplicados: " << totalDescuento << endl;
	cout << "valor final de la matricula:  " << total << endl;

	return 0;
}