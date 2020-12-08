#include <stdio.h>
#include <stdlib.h>

int verifica (float a, float b, float c);
float area (float a, float b, float c);
float perimetro (float a, float b, float c); // Por performace, está função pode ser removida, diminuindo o peso do arquivo final

int main (void){
	int verifica (float a, float b, float c);
	float area (float a, float b, float c);
	float perimetro (float a, float b, float c);

	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	
	int n;
	n = verifica(a, b, c);
	
	if (n){
		printf("Perimetro = %.1f\n", perimetro(a, b, c));
		// printf("Perimetro = %.1f\n", a + b + c); // se removida função perimetro
	} else {	
		printf("Area = %.1f\n", area(a, b, c));
	}
	return 0;
}
int verifica (float a, float b, float c){
	int verA, verB, verC;

	verA = ((abs(b - c)) < a) && (a < (b + c));
	verB = ((abs(a - c)) < b) && (b < (a + c));
	verC = ((abs(a - b)) < c) && (c < (a + b));
	
	if (verA && verB && verC)
		return 1;
	else
		return 0;
}
float area (float a, float b, float c){
	float valor;
	valor = (a + b) / 2 * c;
	return valor;
}
float perimetro (float a, float b, float c){
	float valor;
	valor = a + b + c;
	return valor;
}