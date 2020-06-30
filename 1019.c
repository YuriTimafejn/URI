#include <stdio.h>
#include <stdlib.h>

/*
Conversão de Tempo
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
Entrada

O arquivo de entrada contém um valor inteiro N.
Saída

Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/
int main (void){
    int N, hr = 0, min = 0, sec = 0;
    scanf("%d", &N);


    printf("%d:%d:%d", hr, min, sec);

    return 0;
}
