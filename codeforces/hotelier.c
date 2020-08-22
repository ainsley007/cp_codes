#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    int arr[10] = {0};
    scanf("%s",str);
    // for(int i=0;i<n;i++)
    // printf("%c ",str[i]);
    for(int i=0;i<n;i++)
    {
        if(str[i] == 'L')
        {
            for(int j=0;j<10;j++)
            {
                if(arr[j] == 0)
                {
                    arr[j] = 1;
                    break;
                }
            }
        }

        else if(str[i] == 'R')
        {
            for(int j=9;j>=0;j--)
            {
                if(arr[j] == 0)
                {
                    arr[j] = 1;
                    break;
                }
            }
        }

        else if(str[i] == '0'||str[i] == '1'||str[i] == '2'||str[i] == '3'
        || str[i] == '4'|| str[i] == '5'|| str[i] == '6'|| str[i] == '7'
        || str[i] == '8'|| str[i] == '9')
        {
            int x = (int)str[i];
            arr[x-48] = 0; 
        }
    }
    for(int i=0;i<10;i++)
        printf("%d",arr[i]);
    return 0;
}