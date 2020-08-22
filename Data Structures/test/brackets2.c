#include<stdio.h>
#include<string.h>
#define MAX 1000002
int main()
{
	int i,a = 0;
	//array to store the input string
	char str[MAX];
	fgets(str, sizeof(str), stdin);
	// for(i=0;i<10;i++)
	// 	scanf("%[^\n]s",&str[i]);

	//array to be used as stack
	char bstack[MAX];
	int top = -1;

	for(i=0;i<MAX;i++)
	{
		//check if element is opening bracket, then push into stack
		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
		{
			top++;
			bstack[top] = str[i];
		}
		//check if element is closing bracket
		else if(str[i] == ')' || str[i] == '}' || str[i] == ']')
		{
			//check if stack is empty(top = -1), or stack top elemrent(opening bracket) doesnot match with closing brac. in the string
			//if it doesnt match...exit loop and return the index at mismatch.
			if((top == -1) || (str[i] == ')' && bstack[top] != '(') || (str[i] == '}' && bstack[top] != '{') || (str[i] == ']' && bstack[top] != '[') )
			{
				a = i + 1;
				break;
			}
			//else pop the stack top bracket....coz it matched.
			else
				top--;
		}
	}
	//at last, stack is either gonna be empty(top = -1) , or some brackets were left to match.

	if(top == -1)
		printf("Success");
	else
		printf("%d\n",a);

	return 0;
}