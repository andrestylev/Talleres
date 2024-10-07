#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3, num4, num5, multiplosDe3 = 0, noMultiplos = 0;
     
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "introduce el segundo numero: ";
    cin >> num2;
    cout << "introduce el tercer numero: ";
    cin >> num3;
    cout << "introduce el cuarto numero: ";
    cin >> num4;
    cout << "introduce el quinto numero: ";
    cin >> num5;
    cout << endl;
    if (num1 %3 == 0)
    {
        multiplosDe3 += 1;
    }
    else
    {
        noMultiplos += num1;
    }
    if (num2 % 3 == 0)
    {
        multiplosDe3 += 1;
    }
    else
    {
        noMultiplos += num2;
    }
    if (num3 % 3 == 0)
    {
        multiplosDe3 += 1;
    }
    else
    {
        noMultiplos += num3;
    }
    if (num4 % 3 == 0)
    {
        multiplosDe3 += 1;
    }
    else
    {
        noMultiplos += num4;
    }
    if (num5 % 3 == 0)
    {
        multiplosDe3 += 1;
    }
    else
    {
        noMultiplos += num5;
    }
    cout << "numero de multiplos de 3 = " << multiplosDe3 << endl;
    cout << "suma de los numeros no multiplos de 3 = " << noMultiplos << endl;

    return 0;
}