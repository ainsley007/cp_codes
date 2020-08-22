#include<stdio.h>
#include<string.h>
int main()
{
	char str1[101], str2[101];
	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);
//	puts(str1);
//	puts(str2);

	int i,j;
	int n = strlen(str1);
	int m = strlen(str2) + 1;
	int a[n][m] ;
	//intiallizing array 
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	        a[i][j] = 1000;
	}
	for(i=0;i<n;i++)
		a[0][i] = i;

	for(i=0;i<n;i++)
		a[i][0] = i;
	//array made
    /*	for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        printf("%d ", a[i][j]);
    	}*/
	//logic start

	for(i=1;i<n;i++)
	{
		for(j=1;j<m;j++)
		{
			if(str1[i-1] == str2[j-1])
				a[i][j] = a[i-1][j-1];

			else
			{
				if(a[i][j-1] + 1 < a[i][j])
					a[i][j] = a[i][j-1] + 1;

				if(a[i][j] > a[i-1][j-1] + 1)
					a[i][j] = a[i-1][j-1] + 1;
				
				if(a[i][j] > a[i-1][j] + 1)
					a[i][j] = a[i-1][j] + 1;
			}
		}
	}

	printf("%d\n",a[n][m]);

	return 0;

}	
