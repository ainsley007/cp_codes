#include<stdio.h>
#include <string.h>
#define MAX	1000000
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		  char str[MAX];
		  scanf("%s", str); 
  		int n;
  		int i;
	    for ( i = 0; str[i] != '\0'; ++i); 
  			n = i;
        
  		int d[n];
  		int c = 1;
  		for(i=0;i<n;i++)
  		{
  			if(str[i] == 'L')
  				{
  				    c++;
  				    d[i] = c;   
  				}	
  			else
  				{
  				    c = 1;
  				    d[i] = c;
  				}
  		}
  		int maxx = d[0];
  		for(i=0;i<n;i++)
  		{
  			if(d[i]>maxx)
  				maxx = d[i];
  		}
  		 printf("%d\n",maxx);  
	}
	return 0;
}