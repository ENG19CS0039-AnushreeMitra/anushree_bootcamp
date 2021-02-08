#include<stdio.h>
#include<math.h>

void input()
{
	int x1, x2, y1, y2;
printf("Enter the (x,y) coordinates of point 1: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter the (x,y) coordinates of point 2: ");
	scanf("%d%d", &x2, &y2);
}
void disp()
{
	float d = dist(x1, x2, y1, y2) ;
	printf("The distance between (%d,%d) and (%d,%d) is %f units\n", x1,y1,x2,y2,d);
}
float dist(int x1, int x2, int y1, int y2)
{
	float d, num, denom;
	num = pow((x1-x2),2);
	denom = pow((y1-y2),2);
	d = sqrt(num+denom);
	return d;
}
int main()
{
	input();
	display();
	return 0;
}
	
