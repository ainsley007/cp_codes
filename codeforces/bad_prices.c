#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int i;
		int n;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);

		int min = arr[n-1];
		int bad = 0;
		for(i=n-2;i>=0;i--)
		{
			if(arr[i]>min)
				bad++;

			if(arr[i] < min)
				min = arr[i];
		}
		printf("%d\n",bad);
	}
	return 0;
}