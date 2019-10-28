#include<stdio.h>
#include<cmplx.h>
#include<math.h>

typedef float cmplx_t[2];

int main()
{
        double mag, phs;
        double c;
        mag=5;
        phs=M_PI/6

        c=cmplx_real(mag, phs);

        printf("%.2f \n", c);
return 0;
}


