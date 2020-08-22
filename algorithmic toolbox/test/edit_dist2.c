#include<stdio.h>
#include<string.h>
int main()
{
	char str1[102], str2[102];
	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);

	int i,j;
	for(i=0;i<101;i++)
	{
	    if(str1[i] == '\n')
	        str1[i] = '\0';
	}
	for(i=0;i<101;i++)
	{
	    if(str2[i] == '\n')
	        str2[i] = '\0';
	}
	int n = strlen(str1);
	int m = strlen(str2);

//	intiallizing array 
	int a[n+1][m+1];
	for(i=0;i<n+1;i++)
	{
	    for(j=0;j<m+1;j++)
	        a[i][j] = 1000;
	}

	for(i=0;i<m+1;i++)
		a[0][i] = i;

	for(i=0;i<n+1;i++)
		a[i][0] = i;

	//logic
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<m+1;j++)
		{
			if(str1[i-1] == str2[j-1])
				a[i][j] = a[i-1][j-1];
			else
			{
				if(a[i][j] > a[i-1][j])
					a[i][j] = a[i-1][j] + 1;

				if(a[i][j] > a[i-1][j-1])
					a[i][j] = a[i-1][j-1] + 1;

				if(a[i][j] > a[i][j-1])
					a[i][j] = a[i][j-1] + 1;
			}
		}
	}
	printf("%d\n",a[n][m]);


	return 0;
}