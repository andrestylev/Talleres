#include <stdio.h>

int main() {
	float variable1, variable2, temporal;
	printf("escribe la variable uno ");
	scanf_s("%f", &variable1);
	printf("escribe la variable dos ");
	scanf_s("%f", &variable2);

	temporal = variable1;
	variable1 = variable2;
	variable2 = temporal;

	printf("variable 1 = %.2f\n", variable1);
	printf("variable 2 = %.2f\n", variable2);
	return 0;
}