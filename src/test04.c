#include<stdio.h>
#include<cmplx.h>

typedef float cmplx_t[2];

int main()
{
        cmplx_t a;
	double c;
        a[0]=1;
        a[1]=2;

        c=cmplx_phs(a);

        printf("%.2f \n", c);
return 0;
}

