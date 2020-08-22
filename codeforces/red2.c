#include<stdio.h>
int red(char arr[], int n)
{
	int i,j,count  = 0;
	char temp;
	for(i=0;i<n;i++)
	{
		temp = arr[i];
		for(j=0;j<n;j++)
		{
			if(temp == arr[j])
				count++;
		}
		if(count%2==0)
		continue;
		else
		return -1;		
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		char arr[n];
		int i;
		for(i=0;i<n;i++)
			scanf("%c",&arr[i]);
		int result = red(arr,n);

		//result == -1 ? printf("no\n"): printf("yes\n");
		if(result == -1)
			printf("no\n");
		else
			printf("yes\n");

	}	
	return 0;
}