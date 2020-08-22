#include<stdio.h>

int main()
{
    long long n;

	scanf("%lld",&n);
	
	long long a = 0, b = 1 , fib = 0, fib_dig = 0, arr[60], l = 0;
	int i;
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

	l = (n+2) % 60;
/*	printf("%lld\n",n);

    printf("%lld\n",l );
    printf("%d\n",arr[l-1]-1);
    printf("%d\n",arr[30]);
    printf("%d\n",arr[29]);*/
	if(n==1)
	    printf("1");
	else if(l==0)
		printf("9"); 
	else
	{
		if(arr[l-1]==0)
		printf("9");
		else
		{
		    int r = arr[l-1] - 1;
		    printf("%d\n",r );
		}
	}	
    
    //printf("%d\n",arr[0] );
    
    
	return 0;

}