#include <stdio.h>
 
int main() {
    int id0, id1, quant0, quant1;
    float valor0, valor1, total;
    
    scanf("%d %d %f", &id0, &quant0, &valor0);
    scanf("%d %d %f", &id1, &quant1, &valor1);
    
    total = (valor0 * quant0)+ (valor1 * quant1);
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}