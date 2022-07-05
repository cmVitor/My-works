#include <stdio.h>

int main() {
  int x, y, i;
  scanf("%d %d", &x,&y);
  if(x%2!=0)
    printf("O PRIMEIRO NUMERO NAO E PAR\n");
   else { printf("%d",x);
          x=x+2;
         for(i=2;i<=y;i++){
             printf(" %d",x);
             x = x+2;
   }
   printf("\n");
   
   }

return 0;
}
