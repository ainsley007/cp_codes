#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j;
		int n;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);

		for(i=97;i<123;i++)
			printf("%c",i );

		for(i=0;i<arr[i];i++)
		{
			// if(arr[i] == 0)
			// 	printf("z");
			for(j=97;j<97+arr[i];j++)
				printf("%c",j );
		}
		printf("\n");
	}
	return 0;
}