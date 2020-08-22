#include<stdio.h>
int main()
{
	int n, x = 0;
	scanf("%d",&n);
	while(n--)
	{
		char arr[3];
		int i;
		for(i=0;i<3;i++)
			scanf("%c",&arr[i]);
		
// 		for(i=0;i<3;i++)
// 			printf("%c ",arr[1]);
			
// 		if(arr[1] == '+')
// 		    printf("blyat");

		if(arr[1] == '+')
			x += 1;
		else if(arr[1] == '-')
			x -= 1;
	}

	printf("%d\n",x);
}