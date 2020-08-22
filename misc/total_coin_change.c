#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    int arr[t];
    for(int i=0;i<t;i++)
        scanf("%d",&arr[i]);

    int dp[t+1][n+1];
    for(int i=1;i<n+1;i++)
    {
        dp[0][i] = 0;
    }
    for(int i=0;i<t+1;i++)
        dp[i][0] = 1;
    
    int a;
    for(int i=1;i<t+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            a = j-arr[i-1];
            if(a>=0)
            {
                dp[i][j] = dp[i-1][j] + dp[i][a];
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    printf("%d",dp[t][n]);
}