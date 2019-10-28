#include<stdio.h>
#include<math.h>

typedef float cmplx_t[2];
void cmplx_div(cmplx_t a, cmplx_t b, cmplx_t c)
{
	c[0]=(a[0]*b[0]+a[1]*b[1])/(b[0]*b[0]+b[1]*b[1]);
	c[1]=(a[1]*b[0]-a[0]*b[1])/(b[0]*b[0]+b[1]*b[1]);
}

void cmplx_mul(cmplx_t a, cmplx_t b, cmplx_t c)
{
        c[0]=(a[0]*b[0]-a[1]*b[1]);
        c[1]=(a[0]*b[1]+a[1]*b[0]);
}

double cmplx_mag(cmplx_t a)
{
        sqrt(a[0]*a[0]+a[1]*a[1]);
}

double cmplx_phs(cmplx_t a)
{
	return atan(a[1]/a[0]);
}

double cmplx_real(double mag, double phs)
{
        return mag*(cos(phs));
}

double cmplx_imag(double mag, double phs)
{
        return mag*(sin(phs));
}
