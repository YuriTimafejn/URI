#include <stdio.h>
#include <stdlib.h>

/*

Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
Entrada

O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).
Saída

Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/
int main (void){
    int N;
    scanf("%d", &N);

    printf("%d\n", N); //Havia esquecido dessa necessidade na saida
    printf("%d nota(s) de R$ 100,00\n", N / 100);
    N %= 100;
    printf("%d nota(s) de R$ 50,00\n", N / 50);
    N %= 50;
    printf("%d nota(s) de R$ 20,00\n", N / 20);
    N %= 20;
    printf("%d nota(s) de R$ 10,00\n", N / 10);
    N %= 10;
    printf("%d nota(s) de R$ 5,00\n", N / 5);
    N %= 5;
    printf("%d nota(s) de R$ 2,00\n", N / 2);
    printf("%d nota(s) de R$ 1,00\n", N % 2);

    return 0;
}
