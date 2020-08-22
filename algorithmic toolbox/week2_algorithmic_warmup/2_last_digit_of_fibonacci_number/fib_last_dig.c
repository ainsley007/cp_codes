#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	

	long long a = 0, b = 1 , fib = 0, fib_dig = 0, arr[60], l = 0;
	
	arr[0] = 1;
	
	if(n==1)
		arr[0] = 1;
	else 
	{
		for(i=1;i<60;i++)
		{
			fib = a+b;
			a = b;
			b = fib;
			fib_dig = fib % 10 ;
			arr[i] = fib_dig;
		}
	}

	l = (long long)n % 60;
	if(l==0)
		printf("0"); 
	else
		printf("%d\n",arr[l-1] );
    
    //printf("%d\n",arr[0] );
	return 0;

}