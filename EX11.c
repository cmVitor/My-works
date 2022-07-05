#include <stdio.h>

int main () {
	double m;
	double a;
	double t;
	double v;
	double s;
	double W;
	double vc;
	
	scanf("%lf", &m);
	scanf("%lf", &a);
	scanf("%lf", &t);
	
	v = a*t;
	s = a*(t*t)/2;
	W = m*1000*(v*v)/2;
	
	vc = v*3.6;
	
	printf("VELOCIDADE = %.2lf\n", vc);
	printf("ESPACO PERCORRIDO = %.2lf\n", s);
	printf("TRABALHO REALIZADO = %.2lf\n", W);
	
	
return 0;
}
