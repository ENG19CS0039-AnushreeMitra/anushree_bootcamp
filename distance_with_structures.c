#include<stdio.h>
#include<math.h>
struct cords
{
	int x,y;
}c1, c2;

void ip()
{
printf("Enter the coordinates for point 1: ");
	scanf("%d%d",&c1.x, &c1.y);
	printf("Enter the coordinates for point 2: ");
	scanf("%d%d", &c2.x,&c2.y);
	printf("%d %d %d %d\n", c1.x,c1.y, c2.x, c2.y);
}

void disp(float d)
{
	printf("The distance between (%d,%d) and (%d,%d) is %f units\n",c1.x, c1.y, c2.x, c2.y,d);
}

int main()
{
	float distance;
	int xco, yco;
	ip();
	xco = pow((c1.x-c2.x),2);
	yco = pow((c1.y-c2.y),2);
	distance = sqrt(xco+yco);
	disp(distance);
	return 0;
}

