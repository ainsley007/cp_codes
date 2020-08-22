#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);

	int a = 0, b = 1 , fib = 0;

	if(n==1)
		printf("1");
	else 
	{
		for(i=2;i<=n;i++)
		{
			fib = a+b;
			a = b;
			b = fib;
		}
		printf("%d\n",fib);
	}
	
	

	return 0;

} 