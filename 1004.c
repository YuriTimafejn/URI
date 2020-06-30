#include <stdio.h>
#include <stdlib.h>
/*
Produto Simples

Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.
Entrada

O arquivo de entrada contém 2 valores inteiros.
Saída

Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade. Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/

int main (void) {
    int num0, num1;

    scanf("%d %d", &num0, &num1);

    int PROD = num0 * num1;

    printf("PROD = %d", PROD);

    return 0;
}
