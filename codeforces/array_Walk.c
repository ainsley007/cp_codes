#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,z;
		scanf("%d%d%d",&n,&k,&z);
		int arr[n], i = 1,j = 1;
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);

		int flag = 1, sum = arr[0] + arr[1];
        i = 1;
		for(j=1;j<k;j++)
		{
			if(arr[i+1]>arr[i-1])
			{
				sum += arr[i+1];
				flag = 1;
				i++;
			}
			else if(arr[i+1]<arr[i-1] && (z>0 && flag==1))
			{
				sum += arr[i-1];
				flag = 0;
				z--;
				i--;
			}
			else
			{
				sum += arr[i+1];
				flag = 1;
				i++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}