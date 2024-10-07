#include <stdio.h>

int main() {
	float kmh = 3.6, mps;

	printf("digite velocidad del auto en metros por segundo: ");
	scanf_s("%f", &mps);

	printf("velocidad en kilometros por hora: %.1f\n", mps * kmh);
	return 0;
}