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
    int N, hr = 0, min = 0, sec ;
    scanf("%d", &N);

    hr = N / 3600;
    min =  N % 3600 / 60;
    sec = N % 60;

    printf("%d:%d:%d\n", hr, min, sec);

    return 0;
}
