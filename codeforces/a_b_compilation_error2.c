#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);

	int i;
	long long arr[n], sum = 0;
	for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);

	long long arr2[n-1], sum2 = 0;
	for(i=0;i<n-1;i++)
		scanf("%lld",&arr2[i]);	

	long long arr3[n-2], sum3 = 0;
	for(i=0;i<n-2;i++)
		scanf("%lld",&arr3[i]);

	for(i=0;i<n;i++)
		sum += arr[i];

	for(i=0;i<n-1;i++)
		sum2 += arr2[i];	

	for(i=0;i<n-2;i++)
		sum3 += arr3[i];

	printf("%lld\n%lld",(sum - sum2), (sum2 - sum3));
	return 0;
}
