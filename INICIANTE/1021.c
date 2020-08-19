#include <stdio.h>
#include <stdlib.h>

int main(){
    double valor;
    int div;

    scanf("%lf", &valor);
    ///// NOTAS
    printf("NOTAS:\n");
    div = (valor/100);
    valor = valor - (div*100);
    printf("%d nota(s) de R$ 100.00\n", div);
    div = (valor/50);
    valor = valor - (div*50);
    printf("%d nota(s) de R$ 50.00\n", div);
    div = (valor/20);
    valor = valor - (div*20);
    printf("%d nota(s) de R$ 20.00\n", div);
    div = (valor/10);
    valor = valor - (div*10);
    printf("%d nota(s) de R$ 10.00\n", div);
    div = (valor/5);
    valor = valor - (div*5);
    printf("%d nota(s) de R$ 5.00\n", div);
    div = (valor/2);
    valor = valor - (div*2);
    printf("%d nota(s) de R$ 2.00\n", div);
    ///// MOEDAS
    printf("MOEDAS:\n");
    valor *= 100;
    div = (valor/100);
    valor = valor - (div*100);
    printf("%d moeda(s) de R$ 1.00\n", div);
    div = (valor/50);
    valor = valor - (div*50);
    printf("%d moeda(s) de R$ 0.50\n", div);
    div = (valor/25);
    valor = valor - (div*25);
    printf("%d moeda(s) de R$ 0.25\n", div);
    div = (valor/10);
    valor = valor - (div*10);
    printf("%d moeda(s) de R$ 0.10\n", div);
    div = (valor/5);
    valor = valor - (div*5);
    printf("%d moeda(s) de R$ 0.05\n", div);
    div = valor / 1;
    printf("%d moeda(s) de R$ 0.01\n", div);

    return 0;
}
