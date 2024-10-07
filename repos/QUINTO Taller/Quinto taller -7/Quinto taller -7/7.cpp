#include <stdio.h>

int main() {
	float gradosF;

	printf("grados fahrenheit a convertir a celsius: ");
	scanf_s("%f", &gradosF);

	printf("grados celsius = %.2f\n", (gradosF - 32) * 5 / 9);
	return 0;
}