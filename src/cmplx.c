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

void cmplx_dft(cmplx_t *input, cmplx_t *output, int N)
{
	int n, k;
	cmplx_t clan;
	for (n=0; n<N; n++){
		output[n][0]=0;
		output[n][1]=0;
		for (k=0; k<N; k++){
			clan[0]=cos((2*M_PI*k*n/N));
			clan[1]=-1*sin((2*M_PI*k*n/N));
			cmplx_mul(clan, input[k], clan);
			output[n][0]=output[n][0]+clan[0];
			output[n][1]=output[n][1]+clan[1];
		}
	}
}

void cmplx_idft(cmplx_t *input, cmplx_t *output, int N)
{
	int n, k;
        cmplx_t clan;
        for (n=0; n<N; n++){
                output[n][0]=0;
                output[n][1]=0;
                for (k=0; k<N; k++){
                        clan[0]=cos((2*M_PI*k*n/N))/N;
                        clan[1]=sin((2*M_PI*k*n/N))/N;
			cmplx_mul(clan, input[k], clan);
                        output[n][0]=output[n][0]+clan[0];
                        output[n][1]=output[n][1]+clan[0];
		}
	}

}
