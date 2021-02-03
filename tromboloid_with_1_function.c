int main()
{
	float h, d, b, vol;
	printf("Enter the values of h, d and b respectively: ");
	scanf("%f %f %f ", &h,&d,&b);
	float x,y;
	x = h*d*b;
	y = d/b;
	vol = (1/3)*(x+y);
	printf("The volume of tromboloid for h = %f, d = %f and b = %f is %f unit cube.\n",h,d,b,vol);
	return(0);
}
