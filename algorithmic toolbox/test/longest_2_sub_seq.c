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
	
	int b = m + 1;
	int a = n + 1;
	int arr[a][b];
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
			arr[i][j] = 0;
	}
	
// 	for(i=0;i<a;i++)
// 	{
// 		for(j=0;j<b;j++)
// 			printf("%d ",arr[i][j]);
// 	}
	
// 	for(i=0;i<n;i++)
// 			printf(" %d ",seq1[i]);
    
//     	for(i=0;i<m;i++)
// 			printf(" %d ",seq2[i]);
	for(i=1;i<a;i++)
	{
		for(j=1;j<b;j++)
		{
			if(seq1[i-1] == seq2[j-1])
				arr[i][j] = arr[i-1][j] + 1;

			else
				arr[i][j] = arr[i-1][j];			
		}
	}
	
 
  	printf("%d\n",arr[n][m]+1);

	
	return 0;
}