#include<stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d",&n);
	long long arr[n];
	for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	int dp[n];
	dp[0] = 1;
	long long max = arr[0];

	for(i=1;i<n;i++)
	{
		if(arr[i] >= max)
		{
			dp[i] = dp[i-1] + 1;
			max = arr[i];
		}
		else
		{
		    dp[i] = 1;
		    max = arr[i];
		}
	}
	max = dp[0];
	for(i=0;i<n;i++)
	{
		if(dp[i]>max)
			max = dp[i];
	}

	printf("%d\n",max);

	return 0;
}