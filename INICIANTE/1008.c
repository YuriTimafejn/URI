#include <stdio.h>
 
int main() {
    int NUMBER, hours;
    float SALARY, base;
    
    scanf("%d %d %f", &NUMBER, &hours, &base);
    
    SALARY = hours*base;
    
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %0.2f\n", SALARY);
    
    return 0;
}