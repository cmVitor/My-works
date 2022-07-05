#include <stdio.h>
int main () {
	int n, b1, b2, b3, b4, b5, b6, b7, b8;
	scanf("%d", &n);
	
	if(n<0 || n>255) {
		printf("Numero invalido!");
	}
	else {
		b1=n%2;
		n=n/2;
		b2=n%2;
		n=n/2;
		b3=n%2;
		n=n/2;
		b4=n%2;
		n=n/2;
		b5=n%2;
		n=n/2;
		b6=n%2;
		n=n/2;
		b7=n%2;
		n=n/2;
		b8=n%2;
		
		printf("%d%d%d%d%d%d%d%d", b8, b7, b6, b5, b4, b3, b2, b1);
		
	}
		
	return 0;
}
