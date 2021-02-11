#include<stdio.h>
struct frac
{
	int num, denom;
};
int main()
{
	struct frac x[100];
	int n, i,gcd, nsum= 0, dval= 1;
	printf("Enter the value of 'n': ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Enter the numerator of fraction %d: ", i+1);
		scanf("%d", &x[i].num);
		printf("Enter the denominator of fraction %d: ", i+1);
		scanf("%d", &x[i].denom);
		printf("The entered fraction is %d/%d\n", x[i].num, x[i].denom);
		dval *= x[i].denom;
	}
	
	for(i=0; i<n; i++)
	    nsum += (x[i].num*dval)/x[i].denom;
	//for gcd:
	for(i=1; i<=nsum && i<=dval; i++)
	{
		if((nsum%i == 0) && (dval%i == 0))
			gcd = i;
	}
	nsum /= gcd; dval /= gcd;
	printf("The sum of given %d fractions is %d/%d\n",n,nsum,dval);
	return 0;
}
