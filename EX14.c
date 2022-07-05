#include <stdio.h>
int main () {
	float valor, vr;
	int a1, a2, a3;
	
	scanf("%f", &valor);
	
	a1 = valor*10 + 0.5;
	vr = (float)a1/10;
	printf("%f\n", vr);
	
	a2 = valor*100 + 0.5;
	vr = (float)a2/100;
	printf("%f\n", vr);
	
	a3 = valor*1000 + 0.5;
	vr = (float) a3/1000;
	printf("%f\n", vr);
	
	
return 0;
}
