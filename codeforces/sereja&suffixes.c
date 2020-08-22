#include<stdio.h>
int cmpfunc(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	qsort(arr,n,sizeof(int),cmpfunc);
	for(i=0;i<n;i++)
		printf("%d  ",arr[i]);

	for(i=0;i<m;i++)
	{
		int l,count = 0;
		scanf("%d",&l);
		for(i=l-1;i<n;i++)
		{
			if(arr[i] == arr[i+1])
				count++;
		}
		printf("%d\n",n-count);
	}
    return 0;
}