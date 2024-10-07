#include <stdio.h>

int main() {
	float valor, cantidad,total;
	printf("digite valor del articulo: ");
	scanf_s("%f", &valor);
	printf("cantidad de articulos: ");
	scanf_s("%f", &cantidad);

	total = valor * cantidad;
	printf("Total de articulos con impuesto: %.2f\n", total + (total * 0.10));

	return 0;
}