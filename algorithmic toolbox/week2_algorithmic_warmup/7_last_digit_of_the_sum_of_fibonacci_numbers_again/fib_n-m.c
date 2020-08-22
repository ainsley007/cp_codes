#include<stdio.h>

int main()
{
	//n is large m is small, input m first
    long long n, m;

	scanf("%lld %lld",&m,&n);
	
	long long a = 0, b = 1 , fib = 0, fib_dig = 0, arr[60], l = 0, k = 0, c = m-1, d = 0;
	int i;
	arr[0] = 1;
	
	if(n==1)
		arr[0] = 1;
	else 
	{
		for(i=1;i<60;i++)
		{
			fib = a+b;
			a = b;
			b = fib;
			fib_dig = fib % 10 ;
			arr[i] = fib_dig;
		}
	}
	//n
	int n_last = 0;

	l = (n+2) % 60;

	if(n==1)
	    n_last = 1;
	else if(l==0)
		n_last = 9; 
	else
	{
		if(arr[l-1]==0)
		n_last = 9;
		else
		{
		    int r = arr[l-1] - 1;
		    n_last = r;
		}
	}
//	printf("%d\n",n_last );

	//m
	int m_last = 0;

	k = (c+2) % 60;
	
//	printf("c=%d\n",c);
  //  printf("k=%d\n",k);
//    printf("k0 = %d\n",arr[0]);
    
	if(c==1)
	   	m_last = 1;
	else if(k==0)
		m_last = 9; 
	else
	{
		if(arr[k-1]==0)
		m_last = 9;
		else
		{
		    int q = arr[k-1] - 1;
		    m_last = q;
		}
	}
//		printf("%d\n",m_last );
	
	// n_last and m_last are last digs of Sn and Sm-1;
    if(n==m)
    {
    	d = n % 60;
    	if(d == 0)
    		printf("0");
    	else
    		printf("%d\n",arr[d-1]);
    }		
    else if(n_last > m_last)
    		printf("%d\n", n_last - m_last);
    else if(n_last < m_last)
    {
    	n_last = 10 + n_last;
    	//printf("%d\n",n_last );
    	printf("%d\n", n_last - m_last);
    }
    else if(n_last == m_last)
    	printf("%d",n_last - n_last);
    
    
    
	return 0;

}