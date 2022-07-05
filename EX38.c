#include <stdio.h>
int main () {
	float a, b, c;
	float perimetro, area;
	
	scanf("%f %f %f", &a, &b, &c);
	
	if( b-c < a < b+c && a-c < b < a+c && a-b < c < a+b) {
		
		perimetro = a + b + c;
		printf("Perimetro = %.1f\n", perimetro);	
	}
	else {
		area = (a + b) *c/2;
		printf("Area = %.1f");
	}
	
	
	
return 0;
}
