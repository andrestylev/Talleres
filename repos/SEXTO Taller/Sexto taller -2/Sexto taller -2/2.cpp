#include <iostream>

using namespace std;

int main() {
	double Lpor100km;
	#define NumLxgalon 3.78541
	cout << "numero de litros por cada 100km para convertir a km por galon: ";
	cin >> Lpor100km;

	cout << "el consumo de kilometros por galon es: " << (100 / Lpor100km) * NumLxgalon;

	return 0; 
}