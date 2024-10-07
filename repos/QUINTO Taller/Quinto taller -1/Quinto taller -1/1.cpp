#include <stdio.h>

int main() {
	int num1, num2;
	printf("introduzca el primer numero: ");
	scanf_s("%d", &num1);
	printf("introduzca el segundo numero: ");
	scanf_s("%d", &num2);

	printf("El cuadrado del primer numero es : %d\nY el cubo es :% d\n", num1 * num1, num1 * num1 * num1);
	printf("El cuadrado del segundo numero es : %d\nY el cubo es :% d\n", num2 * num2, num2 * num2 * num2);

	return 0;
}