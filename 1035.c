#include <stdio.h>
#include <stdlib.h>

/* */

int main (void){
	int A, B, C, D;
	scanf ("%d %d %d %d", &A, &B, &C, &D);

	int t1 = A + B;
	int t2 = C + D;
	if(B > C && D > A && t2 > t1 && C > 0 && D > 0){
		printf("Valores aceitos\n");
	} else {
		printf("Valores nao aceitos\n");
	}
	return 0;
}
