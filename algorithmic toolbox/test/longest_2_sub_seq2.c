#include<stdio.h>
int main()
{
	int i,j;
	int n;
	scanf("%d",&n);
	int seq1[n];

	for(i=0;i<n;i++)
		scanf("%d",&seq1[i]);

	int m;
	scanf("%d",&m);
	int seq2[m];

	for(i=0;i<m;i++)
		scanf("%d",&seq2[i]);

	//initialize dp table array with all elements = 0
	int a[n+1][m+1];

	for(i=0;i<n+1;i++)
	{
		for(j=0;j<m+1;j++)
			a[i][j] = 0;
	}

	//logic

	for(i=1;i<n+1;i++)
	{
		for(j=1;j<m+1;j++)
		{
			if(seq1[i-1] == seq2[j-1])
				a[i][j] = a[i-1][j-1] + 1;
			else
				{
					if(a[i-1][j] > a[i][j-1])
						a[i][j] = a[i-1][j];

					else
						a[i][j] = a[i][j-1];
				}
		}
	}

	printf("%d\n",a[n][m]);

	return 0;


}