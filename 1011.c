#include <stdio.h>
#include <math.h>
#define PI 3.14159
 
int main() {
    double raio, resultado;
    
    scanf("%lf", &raio);
    
    resultado = (4.0/3) * PI * pow(raio, 3);
    
    printf("VOLUME = %.3lf\n", resultado);
    
    return 0;
}