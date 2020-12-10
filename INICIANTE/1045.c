#include<stdio.h>
void _sort (double *x, double *y, double *z);
int main (){
	void _sort (double *x, double *y, double *z);
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	_sort (&a, &b, &c);
	if (a >= (b + c))
	    printf("NAO FORMA TRIANGULO\n");
	else{
        if ((a * a) == (b * b + c * c))
            printf("TRIANGULO RETANGULO\n");
        if ((a * a) > (b * b + c * c))
            printf("TRIANGULO OBTUSANGULO\n");
        if ((a * a) < (b * b + c * c))
            printf("TRIANGULO ACUTANGULO\n");
        if ((a == b) && (b == c))
            printf("TRIANGULO EQUILATERO\n");
        if (((a == b) && (a != c)) || ((b == c) && (b != a)))
            printf("TRIANGULO ISOSCELES\n");
	}

}
void _sort (double* x, double* y, double* z) {
    double temp;
    if (*x < *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*y < *z) {
        temp = *y;
        *y = *z;
        *z = temp;
    }
    if (*x < *y)
        _sort(x,y,z);
}
