#include <stdio.h> 
void printGolomb(long long l,long long n) 
{ 
	long long dp[n + 1];  
	dp[1] = 1; 

	long long sum = 1 , m = 1000000007;
	for (int i = 2; i <= n; i++) 
	{ 
		dp[i] = 1 + dp[i - dp[dp[i - 1]]]; 
		if(i>=l && i<=n)
			sum = (sum + (dp[i]*dp[i])) % m;	
	}
	if(l>1)
		sum--;
	// for(int i=l;i<=n;i++)
	// {
	// 	sum = (sum + (dp[i]*dp[i])) % m;
	// }
	printf("%lld\n",sum);
} 

int main() 
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long l,n;
		scanf("%lld%lld",&l,&n); 
		printGolomb(l,n); 
	}
			
	return 0; 
} 
