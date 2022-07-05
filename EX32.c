#include <stdio.h>
int main () {
	
	int cc, dr, rt, classe;
	scanf("%d %d %d", &cc, &dr, &rt);

	if (cc<7 && dr>50 && rt>80000) {
		classe = 10;
	}
	else if (cc<7 && dr>50) {
		classe = 9;
	}
	else if (cc<7) {
		classe = 8;
	}
	else {
		classe = 7;
	}
	printf("ACO DE GRAU = %d\n", classe);
	
	
return 0;
}
