#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	float a,b,c,p,h,area;

	if (argc < 4) {
		fprintf(stderr,"Not enough args. Use: area a b c\n");
	}
	else {
		a = atof(argv[1]);
		b = atof(argv[2]);
		c = atof(argv[3]);

		p = 0.5*(c*c+b*b-a*a)/c;

		if (fabs(p/b) > 1.0) 
			fprintf(stderr,"ERROR: can't make a triangle!\n");
		else {
			h = sqrt(b*b-p*p);
			area = 0.5*c*h;
			fprintf(stdout,"Area of the tringle: %f\n",area);
		}
	}
	return 0;
}
