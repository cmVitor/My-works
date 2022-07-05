#include <stdio.h>
int main(){
    int conta;
    char tipo; //{R,C,I}
    float txres, txcom, txind, custo=0, consumo;
    
    scanf("%d %f %c", &conta, &consumo, &tipo);
    
    txres = 5.00;
    txcom = 500;
    txind = 800;
    
    if(tipo =='R')
    
      custo = txres + consumo*0.05;
    
    else if (tipo == 'c')
      if (consumo > 80)
       custo = txcom + (consumo - 80)*0.25;
       
       else custo = txcom;
   
    else if (consumo>100)
       custo = txind + (consumo-100)*0.04;
       
       else custo = txind;
      
    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2f\n", custo);
       
return 0;
}

















