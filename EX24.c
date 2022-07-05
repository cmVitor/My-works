#include <stdio.h>
int main () {
	float s;
	float sr;
	
	scanf("%f", &s);
	
	if (s<=300) {
		sr = s + s*0.5;
	}
	else {
		sr = s + s*0.3;
	}
	
	printf("SALARIO COM REAJUSTE = %.2f\n", sr);
	
	
	
return 0;
}
