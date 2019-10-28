#include<stdio.h>
#include<cmplx.h>

typedef float cmplx_t[2];

int main()
{
        cmplx_t a,b,c;
        a[0]=1;
        a[1]=2;
        b[0]=3;
        b[0]=4;

        cmplx_mul(a, b, c);

        printf("%.2f + %.2fi \n", c[0], c[1]);
return 0;
}

