#include <stdio.h>
#define pi 3.14159
int main () {


float r, a;
float ac, al, at;
float custo;

scanf("%f", &r);
scanf("%f", &a);

ac = pi*(r*r);
al = 2*pi*r*a;
at = 2*ac + al;

custo = at * 100;

printf("O VALOR DO CUSTO E = %.2f\n", custo);

	
	
	
return 0;
}
