#include<stdio.h>
#define MAX 1000002
bool brackets(char str[MAX])
{
	int i;
	int top = -1;
	for(i=0;i<n;i++)
	{
		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
		{
			top++;
			bstack[top] = str[i];
		}

		else if(str[i] == ')' || str[i] == '}' || str[i] == ']')
		{
			if((top = -1) || (str[i] == ')' && bstack[top] != '(') || (str[i] == '}' && bstack[top] != '{') || (str[i] == ']' && bstack[top] != '[') )
			{
				printf("%d\n",i+1);
				break;
			}
			// else if(str[i] == ')' && bstack[top] != '(' )
			// {
			// 	printf("%d\n",i+1);
			// 	break;
			// }
			// else if(str[i] == '}' && bstack[top] != '{' )
			// {
			// 	printf("%d\n",i+1);
			// 	break;
			// }
			// else if(str[i] == ']' && bstack[top] != '[' )
			// {
			// 	printf("%d\n",i+1);
			// 	break;
			// }
			else
				top--;
		}	
	}

}


int main()
{
	int i;
	char str[MAX];
	char bstack[MAX];
	int top = -1;
	fgets(str, sizeof(str), stdin);
	for(i=0;i<101;i++)
	{
	    if(str[i] == '\n')
	        str[i] = '\0';
	}

	int n = strlen(str);
	

	if(brackets(str) == true)
		printf("Success\n");	
	
		return 0;
}