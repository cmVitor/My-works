#include <stdio.h>
int main () {
	int num, inv, d1, d2, d3;
	
	scanf("%d", &num);
	
	d1 = num/100;
	d2 = (num/10)%10;
	d3 = num%10;
	
	inv = d3*100 + d2*10 + d1;
	
	printf("%d\n", inv);
	
	
	
	
return 0;
}
