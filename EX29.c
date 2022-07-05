#include <stdio.h>
#include <math.h>
int main () {
	float a, b, c, x1, x2;
	float delta;
	
	scanf("%f %f %f", &a, &b, &c);
	
	delta = b*b - 4*(a*c);
	
	if (delta == 0) {
		x1 = -b/(2*a);
		printf("RAIZ UNICA\n");
		printf("X1 = %.2f", x1);
	}
	else if (delta>0) {
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("RAIZES DISTINTAS\n");
		printf("X1 = %.2f\n", x1);
		printf("X2 = %.2f\n", x2);
		
	}
	else if (delta<0) {
		printf("RAIZES IMAGINARIAS\n");
	}
	
		
	return 0;
}
