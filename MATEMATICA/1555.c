#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rafael (int x, int y);
int carlos (int x, int y);
int beto (int x, int y);
void resultado(int beto, int carl, int rafa);

int main (int argc, int **argv){
	//Declaração de funções
	int rafael (int x, int y);
	int carlos (int x, int y);
	int beto (int x, int y);
	void resultado(int beto, int carl, int rafa);
	// declaração de variaveis
	int frafael, fbeto, fcarlos;
	int n, i;
	//inicio
	scanf("%d", &n);
	
	while(n != 0){ //Orignalmente foi feito um loop 'for' que tambem funcionou
		int in1, in2;
		scanf("%d %d", &in1, &in2);
		
		frafael = rafael(in1, in2);
		fbeto = beto(in1, in2);
		fcarlos = carlos(in1, in2);
		//resultado(int beto, int carl, int rafa)
		resultado(fbeto, fcarlos, frafael);
		n--;
	}
	
	
    return 0;
}
int rafael (int x, int y){ //Rafael escolheu é r(x, y) = (3x)² + y²
	int result;
	result = (pow((3*x),2)+pow(y,2));
	return result;
}
int carlos (int x, int y){  //Carlos escolheu a função c(x, y) = -100x + y³.
	int result;
	result = (-100*x)+pow(y,3);
	return result;
}
int beto (int x, int y){ // Beto escolheu a função b(x, y) = 2(x²) + (5y)².
	int result;
	result = 2 * pow(x,2)+pow((5*y),2);
	return result;
}
void resultado(int beto, int carl, int rafa){
	if((beto > carl) && (beto > rafa)){
		printf("Beto ganhou\n");
	}else if((carl > beto) && (carl > rafa)){
		printf("Carlos ganhou\n");
	}else{
		printf("Rafael ganhou\n");
	}
}