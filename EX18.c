#include <stdio.h>
int main () {
	
	float a, b, c, d, e, f;
	float x, y;
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	scanf("%f", &e);
	scanf("%f", &f);
	
	x = (e*c - b*f)/(e*a - b*d);
	y = (c - a*x)/b;
	
	printf("O VALOR DE X E = %.2f\n", x);
	printf("O VALOR DE Y E = %.2f\n", y);
	
return 0;
}
