#include <stdio.h>
#define Pop 1.00
#define Ger 5.00
#define Arq 10.00
#define Cad 20.00
int main () {
    int np, i, n;
    double porcP, porcG, porcA, porcC, arrecadacao;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d %lf %lf %lf %lf", &np, &porcP, &porcG, &porcA, &porcC);
        arrecadacao = np*(porcP*Pop/100.0) + np*(porcG*Ger/100.0) + np*(porcA*Arq/100.0) + np*(porcC*Cad/100.0);
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, arrecadacao);
      
    }



return 0;
}
