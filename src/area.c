#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float a,b,c,p,h,area;
	if (argc < 4) {
		fprintf(stderr,"Not enough args. Use: area a b c\n");
		exit(-1);
	}
	
	a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);

	p = 0.5*(c*c+b*b-a*a)/c;

	if (p*(b-p) < 0.0) {
		fprintf(stderr,"ERROR: no triangle\n");
		exit(-2);
	}

	h = sqrt(b*b-p*p);
	area = c*h/2.0;

	fprintf(stdout,"Area of the tringle: %f\n",area);

	return 0;
}
