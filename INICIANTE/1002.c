#include <stdio.h>
#include <math.h>
 
int main() {
    double n, raio, A;
    n = 3.14159;
    
    scanf("%lf", &raio);
    
    A = n * pow(raio,2);
    
    printf("A=%.4lf\n", A);
    
    return 0;
}