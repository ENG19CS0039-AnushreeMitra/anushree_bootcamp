#include<stdio.h>
struct fract
{ 	int num, denom;
}o,t;

int main()
{
	int x, y, gcd;
    printf("Enter numerator for 1st fraction: ");
	scanf("%d", &o.num);
	printf("Enter denominator for 1st fraction: ");
	scanf("%d", &o.denom);
	printf("The first fraction you entered is: %d / %d\n",o.num,o.denom);
    printf("Enter numerator for 2nd fraction: ");
	scanf("%d", &t.num);
	printf("Enter denominator for 2nd fraction: ");
	scanf("%d", &t.denom);
	printf("The second fraction you entered is: %d / %d\n",t.num,t.denom);
	x = (o.num*t.denom) + (t.num*o.denom); //cross multiply 
	y = o.denom*t.denom;
	for(int i=1; i<=x && i<=y; i++)
	{
		if((x%i==0)&&(y%i == 0))
			gcd = i;
	}
	x = x/gcd; y = y/gcd;
	printf("Sum of the given two fractions is: %d/%d\n", x,y);
	return 0;
}
	
