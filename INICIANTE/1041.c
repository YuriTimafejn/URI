#include <stdio.h>
#include<stdlib.h>

int main (int argc, int **argv){
    float x, y;
    scanf("%f %f", &x, &y);

    if(0 == x && 0 == y){
        printf("Origem\n");
    }else{
        if(0 == x){
            printf("Eixo Y\n");
        }else if(0 == y){
            printf("Eixo X\n");
        }else if (y > 0 && x > 0){
            printf("Q1\n");
        }else if(y > 0 && x < 0){
            printf("Q2\n");
        }else if(y < 0 && x < 0){
            printf("Q3\n");
        }else{
            printf("Q4\n");
        }
    }

    return 0;
}
