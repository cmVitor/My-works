#include <stdio.h>
main () {
	int num, mes, dia, ano;
	
	scanf("%d", &num);
	
	mes = num%1000000/10000;
	dia = num/1000000;
	ano = num%10000;
	
	if (mes > 12 || dia > 31 ) {
		printf("Data invalida!");
	}
	if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia > 30) {
		printf("Data invalida!");
	}
	if (mes == 2 && dia > 28) {
		printf("Data invalida!");
	}
	else if (mes == 1) {
		printf("%d", dia);
		printf(" de janeiro de %d", ano);
	}
	else if (mes == 2) {
		printf("%d", dia);
		printf(" de fevereiro de %d", ano);
	}
	else if (mes == 3) {
		printf("%d", dia);
		printf(" de março de %d", ano);
	}
	else if (mes == 4) {
		printf("%d", dia);
		printf(" de abriu de %d", ano);
	}
	else if (mes == 5) {
		printf("%d", dia);
		printf(" de maio de %d", ano);
	}
	else if (mes == 6) {
		printf("%d", dia);
		printf(" de junho de %d", ano);
	}
	else if (mes == 7) {
		printf("%d", dia);
		printf(" de julho de %d", ano);
	}
	else if (mes == 8) {
		printf("%d", dia);
		printf(" de agosto de %d", ano);
	}
	else if (mes == 9) {
		printf("%d", dia);
		printf(" de setembro de %d", ano);
	}
	else if (mes == 10) {
		printf("%d", dia);
		printf(" de outubro de %d", ano);
	}
	else if (mes == 11) {
		printf("%d", dia);
		printf(" de novembro de %d", ano);
	}
	else if (mes == 12) {
		printf("%d", dia);
		printf(" de dezembro de %d", ano);
	}
	
return 0;
}
