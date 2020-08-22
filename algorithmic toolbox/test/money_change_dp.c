#include<stdio.h>
int main()
{
	int amount;
	scanf("%d",&amount);
	int n = amount + 1;
    int am[n];
//	int am[amount];
	int coins[3] = {1,3,4};
	int i,j,a = 0;	
    //am[amount] = { 0 };
    
    
	for(i=0;i<n;i++)
	    am[i] = 1001;
	
	am[0] = 0;
	//	for(i=0;i<n;i++)
	  //  printf("%d ",am[i]);
	for(i=1;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			a = i - coins[j];
			if(a>=0)
			{
				if(am[i]>(am[a]+1))
					am[i] = am[a]+1;
			}
		}
	}
	printf("%d",am[amount]);

	return 0;

}