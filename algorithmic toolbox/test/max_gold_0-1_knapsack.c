#include<stdio.h>
int main()
{
	int i,j;
	int w, n;
	scanf("%d %d",&w,&n);
	int items[n+1];
	items[0] = 0;
	for(i=1;i<n+1;i++)
		scanf("%d",&items[i]);

	int profit[n+1];
	for(i=0;i<n+1;i++)
		profit[i] = 0;

	int v[n+1][w+1];

	for(i=0;i<n+1;i++)
	{
		for(j=0;j<w+1;j++)
		{
			if(i == 0 || j== 0)
				v[i][j] = 0;

			else if(items[i] <= j)
			{
				//max of lauda lassan
				if( (j - items[i]>=0	) && v[i-1][j] > (profit[i] + v[i-1][j - items[i]]) )
					v[i][j] = v[i-1][j];
				else
					v[i][j] = (profit[i] + v[i-1][j - items[i]]);
			}
			else
				v[i][j] = v[i-1][j];
		}
	}

	printf("%d\n",v[n][w]);

	return 0;

}