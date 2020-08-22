#include<stdio.h>
int sub_seq(int s1[],int s2[],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<m;j++)
		{
			if(s1[i] == s2[j])
			{
				return i;
			}
		}
	}
	return -1;	
}
	
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i;
		int n,m;
		scanf("%d%d",&n,&m);
		
		int seq1[n];
		for(i=0;i<n;i++)
		scanf("%d",&seq1[i]);

		int seq2[m];
		for(i=0;i<m;i++)
		scanf("%d",&seq2[i]);

		int result = sub_seq(seq1,seq2,n,m);
	//	printf("%d\n",result);

		result == -1 ? printf("NO\n"): printf("YES\n1 %d\n",seq1[result]);
	}
	return 0;
}