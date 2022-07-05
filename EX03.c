#include <stdio.h>
int main ()
{

int n1, n2, n3, result, quadr;

scanf ("%d %d %d", &n1, &n2, &n3);

if (n1 >= 10) {

printf ("DIGITO INVALIDO");
}
else if (n2 >=10) {

printf ("DIGITO INVALIDO");
}
else if (n3 >=10) {

printf ("DIGITO INVALIDO");
}

else {
result = 100*n1 + 10*n2 + n3;

quadr = result*result;

printf ("%d, %d", result, quadr);


}


return 0;
}
