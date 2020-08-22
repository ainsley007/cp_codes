#include<stdio.h>
int main()
{
	long long amount;
	scanf("%lld",&amount);
	long long n = amount + 1;
    long long am[n];
//	int am[amount];
	long long coins[5] = {1,5,10,20,100};
	long long i,j,a = 0;	
    //am[amount] = { 0 };
    
    
	for(i=0;i<n;i++)
	    am[i] = 1000000000000000000000000001;
	
	am[0] = 0;
	//	for(i=0;i<n;i++)
	  //  printf("%d ",am[i]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			a = i - coins[j];
			if(a>=0)
			{
				if(am[i]>(am[a]+1))
					am[i] = am[a]+1;
			}
		}
	}
	printf("%lld",am[amount]);

	return 0;

}