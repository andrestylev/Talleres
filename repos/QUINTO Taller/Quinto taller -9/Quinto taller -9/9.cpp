#include <stdio.h>

int main() {
	float kmh, mph = 0.621371;

	printf("digite velocidad del auto en km/h: ");
	scanf_s("%f", &kmh);

	printf("velocidad en millas por hora: %.1f\n", kmh * mph);

	return 0;
}