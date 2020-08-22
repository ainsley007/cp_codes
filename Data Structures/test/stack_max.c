#include<stdio.h>
int main()
{
	int q,i,j;
	scanf("%d",&q);
	char str[4];
	int arr[q];
	int as[q];
	int a;
	int top = -1, max = -1;
	for(i=0;i<q;i++)
	{
		scanf("%s",str);

		if(str[1] == 'u')
		{
		    scanf("%d",&a);
		    top++;
		    arr[top] = a;
			if(max == -1)
			{
				max++;
				as[max] = arr[top];
			}
			if(arr[top]>=as[max])
			{
				max++;
				as[max] = arr[top];
			}
			else
			{
				max++;
				as[max] = as[max-1];
			}
			
		    
		}
		
		else if(str[1] == 'a')
	    {	
	        printf("%d\n",as[max]);
	    }
	    else if(str[1] == 'o')
	    {
	        max--;
	        top--;
	    }
	}
	return 0;
}