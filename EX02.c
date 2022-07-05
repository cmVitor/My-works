#include <stdio.h>
int main (){

float salmin, qtdkw, custokw;

scanf("%f%f", &salmin, &qtdkw);

custokw = (salmin*0.7)/100;
printf("Custo por kW: R$ %.2f\n", custokw);
printf("Custo do consumo: R$ %.2f\n", custokw*qtdkw);
printf("Custo com desconto: R$ %.2f\n", custokw*qtdkw*0.9);

return 0;
}
