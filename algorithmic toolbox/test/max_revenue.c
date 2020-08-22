#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	long long a[n],b[n],sum = 0;
	int i,j,x=0,y=0;
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);

	for(i=0;i<n;i++)
		scanf("%lld",&b[i]);

    for (i = 0; i < n; ++i) 
        {
 
   	    for (j = i + 1; j < n; ++j)
            {
 
  	        if (a[i] > a[j]) 
                {
 
                    x =  a[i];
                    a[i] = a[j];
                    a[j] = x;
                }
 
            }
 
        }

    for (i = 0; i < n; ++i) 
        {
 
   	    for (j = i + 1; j < n; ++j)
            {
 
  	        if (b[i] > b[j]) 
                {

                    y =  b[i];
                    b[i] = b[j];
                    b[j] = y;
 
                }
 
            }
 
        }	


    for (i = 0; i < n; ++i)
    	sum = sum + a[i]*b[i];

    printf("%lld\n",sum );
	
	 return 0;


}