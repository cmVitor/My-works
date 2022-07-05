#include <stdio.h>
#define TP 128*0.75

int main() {
  int mat, NP;
  float p1,p2,p3,p4,p5,p6,p7,p8, MP;
  float l1,l2,l3,l4,l5,ML, NT, MF;
  scanf("%d",&mat);
  scanf("%f %f %f %f %f %f %f  %f",&p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8);
  scanf("%f %f %f %f %f %f",&l1, &l2, &l3, &l4, &l5, &NT);
  scanf("%d", &NP);
  while(mat!=-1) {
    MP = (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8)/8.0;
    ML = (l1 + l2 + l3 + l4 + l5)/5.0;
    MF = MP*0.7 + ML*0.15 + NT*0.15;
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final:",mat,MF);
    if((MF>=6.0)&&(NP>=TP))
       printf(" APROVADO\n");
      else if((MF>=6.0)&&(NP<TP))
             printf(" REPROVADO POR FREQUENCIA\n");
            else if((MF<6.0)&&(NP>=TP))
                   printf(" REPROVADO POR NOTA\n");
                  else printf(" REPROVADO POR NOTA E POR FREQUENCIA\n");
    scanf("%d",&mat);
    scanf("%f %f %f %f %f %f %f  %f",&p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8);
    scanf("%f %f %f %f %f %f",&l1, &l2, &l3, &l4, &l5, &NT);
    scanf("%d", &NP);  
  }
  return 0;
}
