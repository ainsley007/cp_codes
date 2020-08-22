#include<stdio.h>
int main()
{
	int d;
	scanf("%d",&d);//final destination
	int m;
	scanf("%d",&m);//max travel distance
	int n;
	scanf("%d",&n);//no of stops
	int stops[n+2];
	stops[0] = 0;
	stops[n+1] = d;
	int i, refill = 0;//no of refills
	for(i=1;i<n+2;i++)
		scanf("%d",&stops[i]);
    
	int start;//starting point with full tank
	start = stops[0];
//	for(i=0;i<n+2;i++)
//		printf("%d\n",stops[i]);
		
//	printf("%d\n",start);

	for(i=0;i<n+2;i++)
	{
		if(stops[i+1] - stops[i] > m)
		{
			printf("-1\n");
			exit(0);
		}


		else if(stops[i] - start > m)
		{
			refill = refill + 1;
			start  = stops[i-1];
		}
	}
	printf("%d\n", refill);
return 0 ;
}