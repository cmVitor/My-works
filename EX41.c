#include <stdio.h>
int main () {
    float fare, c;
    int i, n;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
    scanf("%f", &fare);

    c = 5*(fare-32)/9.0;

    printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", fare, c);
    }



return 0;
}
