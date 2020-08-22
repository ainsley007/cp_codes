#include<stdio.h>
int main()
{
	int value;
	scanf("%d",&value);
	int n = value + 1;
	int am[n];
	int op[3] = {1,2,3};
	int i,j;
	int a = 0, rem = 0;

	for(i=0;i<n;i++)
	    am[i] = 1000001;
	
	am[0] = 0;	

	for(i=1;i<n;i++)
	{
		for(j=0;j<3;j++)
		{

			if(j==0)
			{
				a  = i - op[j];
				if(a>=0)
				{
					if(am[a]+1 < am[i])
						am[i] = am[a] + 1;
				}
			}

			else
			{
				a  = i % op[j];
				if(a==0)
				{
					rem = i / op[j];
					if(am[rem]+1 < am[i])
						am[i] = am[rem] + 1;
				}
			}

		}
	}

	printf("%d\n",am[value] - 1);

	return 0;
}