#include<stdio.h>
void disp(int, int);
struct fract
{ 	int num, denom;
};
typedef struct fract fr;
fr input()
{
	fr x;
	printf("Enter numerator of the fraction: ");
	scanf("%d", &x.num);
	printf("Enter denominator of the fraction: ");
	scanf("%d", &x.denom);
	printf("The entered fraction is: %d/%d\n",x.num,x.denom);
	return (x);
}

int sumf(int a, int b, int c, int d)
{
    int i, x, y, gcd, sum;
    x = (a*d) + (c*b); //cross multiply 
	y = b*d;
	for(int i=1; i<=x && i<=y; i++)
	{
		if((x%i==0)&&(y%i == 0))
			gcd = i;
	}
	x = x/gcd; y = y/gcd;
	disp(x,y);
}
void disp(int x, int y)
{
    printf("The sum of entered fractions is %d/%d",x,y);
}

int main()
{
	fr o,t;
	int sum;
	printf("FRACTION 1 -\n");
    	o = input();
   	printf("FRACTION 2 -\n");
	t = input();
	sum = sumf(o.num, o.denom, t.num, t.denom);
	return 0;
}
