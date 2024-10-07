#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4, num5, Entre50y75, MayoresDe80, MenoresDe30;

    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    cout << "Introduce el tercer numero: ";
    cin >> num3;
    cout << "Introduce el cuarto numero: ";
    cin >> num4;
    cout << "Introduce el quinto numero: ";
    cin >> num5;

    Entre50y75 = (num1 >= 50 && num1 <= 75) + (num2 >= 50 && num2 <= 75) + (num3 >= 50 && num3 <= 75) + (num4 >= 50 && num4 <= 75) + (num5 >= 50 && num5 <= 75);
    MayoresDe80 = (num1 > 80) + (num2 > 80) + (num3 > 80) + (num4 > 80) + (num5 > 80);
    MenoresDe30 = (num1 < 30) + (num2 < 30) + (num3 < 30) + (num4 < 30) + (num5 < 30);

    cout << "cantidad de numeros entre 50 y 75: " << Entre50y75 << endl;
    cout << "Cantidad de números mayores de 80: " << MayoresDe80 << endl;
    cout << "cantidad de números menores de 30: " << MenoresDe30 << endl;

return 0;
}

