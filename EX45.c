#include <stdio.h>

int main() {
  int n, k;
  float soma = 0.0;
  scanf("%d", &n);
  if(n<1)
    printf("Numero invalido!\n");
   else { for(k=1; k<=n; k++)
          soma += (float)1/k;
        printf("%.6f\n",soma);
       }
return 0;
}
