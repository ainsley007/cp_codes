#include<stdio.h>

int main()
{
	int m;
	scanf("%d",&m);

	int t=0, f=0, o=0;
	int rem = 0, remi = 0;

	t = m / 10;
	rem = m%10;
	f = rem/5;
	remi = rem% 5;
	o = remi/1;

/*	printf("%d\n",t );
	printf("%d\n",f );
	printf("%d\n",o );
	printf("%d\n",rem );
	printf("%d\n",remi );*/
	printf("%d\n", t+f+o );

	return 0;


}