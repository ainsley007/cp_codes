#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d",&arr[i]);

        int max = arr[0], index = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
                index = i;
            }
        }
        if(index>0 && index<n-1)
        {
            printf("YES\n");
            printf("%d %d %d \n",index, index+1, index+2);
        }
        else
        {
            printf("NO\n");
        } 
    }
    return 0;
}