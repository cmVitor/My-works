#include <stdio.h>
int main(){

float c, f, m, p;

scanf("%f %f", &f, &p);

//printf("O valor de f = %.2f\n", f);
//printf("O valor de p = %.2f\n", p);

c = 5.0*(f-32)/9;

m = 25.4*p;

printf("O VALOR EM CELSIUS = %.2f\n", c);
printf("A QUANTIDADE DE CHUVA E = %.2f\n", m);


return 0;
}
