#include<stdio.h>
#define MAX 100001
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	int check[MAX] = {0};
	int id[MAX];
	int count = 1;
	for(i=n-1;i>=0;i--)
	{
		if(check[arr[i]] == 0)
		{
			id[i] = count;
			check[arr[i]] = 1;
			count++;
		}
		else
			id[i] = count-1;
	}

	for(i=0;i<m;i++)
	{
		int l;
		scanf("%d",&l);
		printf("%d\n",id[l-1]);
	}	
	return 0;
}