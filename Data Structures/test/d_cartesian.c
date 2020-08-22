#include<stdio.h>

int cart(long long x,long long y,long long a[],int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		if(x+y-a[i] < 0)
			return i;
		else if(x+y-a[i] == 0)
			return -1;	
	}
	return n;	
}


int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int result = 0;
		int i;
		int n;
		scanf("%d",&n);
		long long wall[n];
		for(i=0;i<n;i++)
			scanf("%lld",&wall[i]);

		int q;
		scanf("%d",&q);

		long long x[q], y[q];
		for(i=0;i<q;i++)
			scanf("%lld %lld",&x[i],&y[i]);
		
		for(i=0;i<q;i++)
		{
			result = cart(x[i],y[i],wall,n);
			(result == -1) ? printf("-1 ") : printf("%d ",result);
		}	
	}
	return 0;
}