#include<stdio.h>
#include<stdlib.h>
int cmpfunc(void const *a, void const *b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        qsort(arr,n,sizeof(int),cmpfunc);
        int count = 0;
        for(int i=1;i<n;i++)
        {
            if(arr[i] == arr[i-1])
                count++;
            else if(arr[i] - arr[i-1] == 1)
                count++;
        }
        if(n-count == 1)
            printf("YES\n");
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}