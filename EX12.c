#include <stdio.h>
int main () {
	float cf;
	float pd;
	float i;
	float custo;
	
	scanf ("%f", &cf);
	scanf ("%f", &pd);
	scanf ("%f", &i);
	
	custo = cf + (cf*pd/100) + (cf*i/100);
	
	printf("O VALOR DO CARRO E = %.2f\n", custo);
	


return 0;
}
