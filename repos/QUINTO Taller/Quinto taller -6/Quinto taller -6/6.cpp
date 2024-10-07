#include <stdio.h>

int main() {
	float largo, alto;
	printf("largo de la pared en metros: ");
	scanf_s("%f", &largo);
	printf("alto de la pared en metros: ");
	scanf_s("%f", &alto);

	printf("metros cubicos de arena para revocar la pared = %.2f\n", (largo * alto) * 0.5);

	return 0;
}