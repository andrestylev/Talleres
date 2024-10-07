#include <stdio.h>
#include <math.h>

int main() {
	float A, B;
	printf("cateto A: ");
	scanf_s("%f", &A);
	printf("cateto B: ");
	scanf_s("%f", &B);

	printf("La hipotenusa C es: %.2f\n ", sqrt((A * A) + (B * B)));

	return 0;
}