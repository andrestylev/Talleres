#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
int main() {
	float R, H;
	
	printf("radio del cilindro: ");
	scanf_s("%f", &R);
	printf("altura del cilindro: ");
	scanf_s("%f", &H);
	printf("\n");

	printf("el area del cilindro es: %.2f\n", 2 * PI * R * H);
	printf("el volumen del cilindro es: %.2f\n", PI * R * R * H);

	return 0;
}