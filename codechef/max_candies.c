#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,x,y;
		scanf("%d%d%d%d",&n,&m,&x,&y);
		int a,b;
		if(m%2==0)
		{
			a = (m/2);
			if(y>=x)
			   	b = y-x;
			else
				{
					b =0;
					x = y;
				}
			int result = n*((x*a)+(b*(m-a)));
			printf("%d\n",result);
		}
		else
		{
			a = (m/2)+1;
			if(y>=x)
				b = y-x;
			else
			{
				b = 0;
				x = y;
			}
			int r1 = (x*a)+(b*(m-a));
			int r2 = b*a + (x*(m-a));
			int res,e,o;
			if(n%2==0)
			{
				e = n/2;
				 res = e*r1 + e*r2;
			}
			else
			{
				o = (n/2)+1;
				res = (o*r1)+((n-o)*r2);
			}
			printf("%d\n", res);
		}
	}
	return 0;

}
