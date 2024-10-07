#include <stdio.h>

int main() {
	float nota1, nota2, nota3;

	printf("Nota 1: ");
	scanf_s("%f", &nota1);
	printf("Nota 2: ");
	scanf_s("%f", &nota2);
	printf("Nota 3: ");
	scanf_s("%f", &nota3);

	printf("Promedio de las tres notas: %.1f\n", (nota1 + nota2 + nota3) / 3);

	return 0;
}