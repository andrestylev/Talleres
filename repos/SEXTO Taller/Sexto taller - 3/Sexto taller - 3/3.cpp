#include <iostream>

using namespace std;

int main() {
	double kilometroxgalon;
#define NumLxgalon 3.78541
	cout << "introduce el numero de kilometros por galon : ";
	cin >> kilometroxgalon;

	cout << "el consumo de litros para 100km es: " << (100 * NumLxgalon) / kilometroxgalon;

	return 0;
}