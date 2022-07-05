#include <stdio.h>
int main () {
	float renda, rb;
	int pessoas, escola, etnia;
	scanf("%f", &renda);
	scanf("%d", &pessoas );
	scanf("%d", &escola);
	scanf("%d", &etnia);
	
	rb = renda/pessoas;
	
	
	if(escola==2 && rb<=1405.5 && etnia==4 ) {
		printf("ALUNO COTISTA (L1)\n");
	}
	else if(escola==2 && rb<=1405.5 && etnia==1) {
		printf("ALUNO COTISTA (L2)\n");
	}
	else if(escola==2 && rb<=1405.5 && etnia==2) {
		printf("ALUNO COTISTA (L2)\n");
	}
	else if(escola==2 && rb<=1405.5 && etnia==3) {
		printf("ALUNO COTISTA (L2)\n");
	}
	else if(escola==2 && rb>1405.5 && etnia==4) {
		printf("ALUNO COTISTA (L3)\n");
	}
	else if(escola==2 && rb>1405.5 && etnia==1) {
		printf("ALUNO COTISTA (L4)\n");
	}
	else if(escola==2 && rb>1405.5 && etnia==2) {
		printf("ALUNO COTISTA (L4)\n");
	}
	else if(escola==2 && rb>1405.5 && etnia==3) {
		printf("ALUNO COTISTA (L4)\n");
	}
	else {
		printf("ALUNO NAO COTISTA\n");
	}
		
	
return 0;
}
