#include <stdio.h>
#include <math.h>
int main () {

float h, a, area, volume;


scanf("%f", &h);
scanf("%f", &a);

area = (3*(a*a)*sqrt(3))/2;

volume = area*h/3;

printf ("O VOLUME DA PIRAMIDE E = %.2f", volume);
printf (" METROS CUBICOS\n");

    
    
return 0;   
}
