#include<stdio.h>
#include<cmplx.h>

int main()
{
	cmplx_t input[2], dft[2];
	input[0][0]=1;
	input[0][1]=2;
	input[1][0]=3;
	input[1][1]=4;
	cmplx_dft(input, dft, 2);
return 0;
}
