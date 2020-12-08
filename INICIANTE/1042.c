#include <stdio.h>

int main (void){
	int a, b, c;
	int temp1, temp2, temp3;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a < b && a < c){
		temp3 = a;
		if(b < c){
			temp2 = b;
			temp1 = c;
		}
		else {
			temp2 = c;
			temp1 = b;
		}
	}else if(b < a && b < c) {
		temp3 = b;
		if (a < c){
			temp2 = a;
			temp1 = c;
		}
		else {
			temp2 = c;
			temp1 = a;
		}
	} else{
		temp3 = c;
		if(a < b){
			temp2 = a;
			temp1 = b;
		} else {
			temp2 = b;
			temp1 = a;
		}
	}
	
	printf("%d\n%d\n%d\n\n", temp3, temp2, temp1);
	printf("%d\n%d\n%d\n", a, b, c);

	return 0;
}
