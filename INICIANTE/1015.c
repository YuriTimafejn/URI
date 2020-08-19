#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Distancia entre dois pontos

Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia = (sqrt(x2 - x1)² +(y2 - y1)²)
Entrada

O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.
Saída

Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
 */
int main (void){
    float x1, y1, x2, y2, distance;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    distance = sqrt(pow((x2 - x1),2)+pow((y2 - y1),2));

    printf("%.4f\n", distance);
    return 0;
}
