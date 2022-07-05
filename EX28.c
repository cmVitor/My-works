#include <stdio.h>
int main () {
	float num1, num2, num3;
	float aux;
	
	scanf("%f %f %f", &num1, &num2, &num3);
	
	if (num1>num3) {
		aux = num1;
		num1 = num3;
		num3 = aux;		
	}
	if (num1>num2) {
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	if (num2>num3) {
		aux  = num2;
		num2 = num3;
		num3 = aux;
	}
	
	printf("%.2f,", num1);
	printf("%.2f,", num2);
	printf("%.2f\n", num3);
	
	
		
return 0;
}
