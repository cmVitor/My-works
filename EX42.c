#include <stdio.h>

int main(){
  int n=0, i;
  while((n<6)||(n>=2000))
     scanf("%d",&n);
  
  for(i=1;i<=n;i++) {
     if(i%2==0)
       printf("%d^2 = %d\n",i,i*i);
   }
return 0;
}