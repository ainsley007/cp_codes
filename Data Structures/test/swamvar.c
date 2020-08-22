#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a;
		scanf("%d",&a);
		int div[3];
		for(int i=0;i<3;i++)
		{
			div[i] = a%10;
			a = a/10;
		}
		int max = div[0], min = div[0];
		for(int i=0;i<3;i++)
		{
			if(div[i]<div[i+1])
				min = div[i];

			if(div[i]>div[i+1])
				max = div[i];
		}
		int score[n];
		int s = 0;
		score[s] = (max*11) + (min*7);
		s++;
	}

	for(int i=0;i<n;i++)
		printf("%d\n",score[i]);

	return 0;

}