#include <stdio.h>
int main () {
	float num1, num2, num3, num4;
	float aux;
	
	scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
	
	if (num1>num4) {
		aux = num1;
		num1 = num4;
		num4 = aux;	
	}
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
	if (num2>num4) {
		aux = num2;
		num2 = num4;
		num4 = aux;
	}
	if (num2>num3) {
		aux  = num2;
		num2 = num3;
		num3 = aux;
	}
	if (num3>num4) {
		aux = num3;
		num3 = num4;
		num4 = aux;
	}
	
	printf("%.2f,", num1);
	printf("%.2f,", num2);
	printf("%.2f,", num3);
	printf("%.2f\n", num4);
	
	
return 0;
} 
