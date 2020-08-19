#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	float A, B, C;
	float delt, R1, R2;

	scanf("%f %f %f", &A, &B, &C);
	delt = pow(B,2) - 4 * A * C;
	if (A == 0){
		printf("Impossivel calcular");
	} else if(delt < 0){
		printf("Impossivel calcular");
	} else{
		A = A * 2;
		R1 = (-B + sqrt(delt))/ A;
		R2 = (-B - sqrt(delt)) / A;
		printf("R1 = %.5f\n", R1);
		printf("R2 = %.5f\n", R2);
	}

	return 0;
}

