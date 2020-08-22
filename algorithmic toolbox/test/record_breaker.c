#include<stdio.h>
int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		int i;
		int count = 0;
		int n;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		int max = arr[0];

		if(n == 1)
			printf("1");
		else
		{
			if(arr[0] > arr[1])
				count++;

			for(i=1;i<n-1;i++)
			{
				if(arr[i] > max && arr[i] > arr[i+1])
				{
					count++;
					max = arr[i];
				}
			}

			if(arr[n-1] > max)
				count++;
		}

		printf("Case #%d: %d\n",j,count);

	}

	return 0;
}