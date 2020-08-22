#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        int min = arr[0],count = 1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;

    
}