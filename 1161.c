#include <stdio.h>
#include <stdlib.h>

int main(void){
    long long int m, n, aux1, aux2;
    int i;
    while(scanf("%lld %lld", &m, &n) != EOF){
        aux1 = 1;
        aux2 = 1;
        for(i = m; i > 0; --i){
            aux1 *= m;
            m--;
        }

        for(i = n; i > 0; --i){
            aux2 *= n;
            n--;
        }

        printf("%lld\n", aux1 + aux2);
    }
    return 0;
}
