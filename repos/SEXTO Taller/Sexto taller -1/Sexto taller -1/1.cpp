#include <iostream>
#include <cmath>

using namespace std; 
#define PI 3.14159265358979
int main() {
	double a, b, c, Ag, Bg, Cg;

	cout << "escriba longitud del lado A ";
    cin >> a;
    cout << "escriba longitud del lado B ";
    cin >> b;
    cout << "escriba longitud del lado C ";
    cin >> c;
    
    Ag = acos((b * b + c * c - a * a) / (2 * b * c)) * 180.0 / PI;
    Bg = acos((a * a + c * c - b * b) / (2 * a * c)) * 180.0 / PI;
    Cg = acos((a * a + b * b - c * c) / (2 * a * b)) * 180.0 / PI;

    cout << "angulo A: " << Ag << endl;
    cout << "angulo B: " << Bg << endl;
    cout << "angulo C: " << Cg << endl;

    return 0;
}
 