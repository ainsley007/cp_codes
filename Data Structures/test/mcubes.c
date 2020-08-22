#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d ",&arr[i]);

	for(i=n-1;i>=0;i++)
	{
		if(arr[i] == arr[i-1])
			continue;
		else 
			{
				printf("%d",i);
				break;
			}

	}
	return 0;
}