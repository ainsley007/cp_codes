#include<stdio.h>
#include<stdlib.h>
int cmpfunc(void const *a,void const *b)
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
        int dif[n-1];
        for(int i=0;i<n-1;i++)
        {
            dif[i] = arr[i+1] - arr[i];
        }
        
        int min = dif[0];
        for(int i=0;i<n-1;i++)
        {
            if(dif[i]<min)
                min = dif[i];
        }
        printf("%d\n",min);
    }
    return 0;
}
