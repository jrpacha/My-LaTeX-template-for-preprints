#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int error_msg(float, float, float);

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

	if (fabs(p/b) > 1.0) {
		fprintf(stderr,"ERROR: can't make a triangle!\n");
	}
	else {
		h = sqrt(b*b-p*p);
		area = 0.5*c*h;
		fprintf(stdout,"Area of the tringle: %f\n",area);
	}

	/* Heron's formula */
	/* Check sides */
	if (a > b+c) error_msg(a,b,c);
	else if (b > a+c) error_msg(b, a, c);
	else if (c > a+b) error_msg(c, a, b);
	else {
		p = 0.5*(a+b+c);
		area = sqrt(p*(p-a)*(p-b)*(p-c));
		fprintf(stdout,"Area of the tringle (Heron): %f\n",area);
	}

	return 0;
}

int error_msg(float A, float B, float C)
{
	fprintf(stderr,"ERROR: %f > %f+%f. No triangle!\n", A, B, C);
	return 0;
}
