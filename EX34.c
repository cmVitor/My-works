#include <stdio.h>
int main() {
	int n, result=0, q, rem;
	scanf("%d", &n);
	
	q = n;
	
	while (q!=0) {
		rem = q%10;
		result = result*10 + rem;
		q = q/10;
	}
	
	if(n>99999) {
		printf("NUMERO INVALIDO\n");
	}
	else if (result == n) {
		printf("PALINDROMO\n");
	}
	else {
		printf("NAO PALINDROMO\n");
	}
		
return 0;
}
