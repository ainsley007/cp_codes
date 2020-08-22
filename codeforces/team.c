#include<stdio.h>
int main()
{
	int n,count = 0;
	scanf("%d",&n);
	while(n--)
	{
		int arr[3];
		int i,sum = 0;
		for(i=0;i<3;i++)
			scanf("%d",&arr[i]);

		for(i=0;i<3;i++)
			sum = sum + arr[i];

		if(sum>=2)
			count+=1;
	}

	printf("%d\n",count);

	return 0;
}