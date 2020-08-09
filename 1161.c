#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    long long int m, n, aux1 = 1, aux2 = 1;

    while(scanf("%lld %lld", &m, &n) != EOF){
        for(int i = m; i > 0; --i){
            aux1 *= m;
            m--;
        }

        for(int i = n; i > 0; --i){
            aux2 *= n;
            n--;
        }

        printf("%lld\n", aux1 + aux2);
    }
    return 0;
}
