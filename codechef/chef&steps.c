#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i;
		long long n,k;
		scanf("%lld %lld",&n,&k);
		long long arr[n];
		for(i=0;i<n;i++)
			scanf("%lld",&arr[i]);

		for(i=0;i<n;i++)
		{
			if(arr[i] % k == 0)
				printf("1");
			else
				printf("0");
		}
	}
	return
}