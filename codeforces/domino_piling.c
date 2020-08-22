#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d",&a,&b);
	int x = a*b;
	if(x%2 == 0)
		x = x/2;
	else
		x = (x-1)/2;

	printf("%d\n",x);

	return 0;
}