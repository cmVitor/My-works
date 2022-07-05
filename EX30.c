#include <stdio.h>
int main () {
	int num1, num2, num3, num4, aux, soma;
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	scanf("%d", &num4);
	
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
	
	soma = num1 + num2 + num3;
	
	printf("%d\n", soma);
	
		
return 0;
}
