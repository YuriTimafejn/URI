#include <stdio.h>

int multiplo (int x, int y);
int main (){
    int multiplo (int x, int y);

    int a, b;
    scanf("%d %d", &a, &b);

    a = multiplo(a, b);
    if (a)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
}
int multiplo (int x, int y){
    if((y % x == 0) || (x % y == 0))
        return 1;
    else
        return 0;
}