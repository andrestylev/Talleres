#include <iostream>

using namespace std;
int main() {
	double sueldoBruto, descuento, Total;

	cout << "sueldo del empleado: ";
	cin >> sueldoBruto;
    cout << endl;
    if (sueldoBruto <= 1000) {
        descuento = sueldoBruto * 0.10;
    }
    else if (sueldoBruto <= 2000) {
        descuento = (sueldoBruto - 1000) * 0.05;
        descuento = descuento + 100;
    }

    else {
        descuento = (sueldoBruto - 2000) * 0.03;
        descuento = descuento + 50;
        descuento = descuento + 100;
    }
    Total = sueldoBruto - descuento;

    cout << "descuento aplicado: " << descuento << endl;
    cout << "sueldo neto: " << Total;

    return 0;
}