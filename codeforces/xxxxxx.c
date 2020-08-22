#include<stdio.h>
int xx(int arr[],int sum,int x,int n)
{
    int t1 = 0, t2 = 0;
    if(sum%x!=0)
        return n;
        for(int i=0;i<n;i++)
        {
            t1 += arr[i];
            t2 += arr[n-i-1];
            if((sum-t1)%x != 0)
                return n-i-1;
            else if((sum-t2)%x != 0)
                return n-i-1;
        }
        return -1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        int arr[n], sum = 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum = sum + arr[i];
        }
        int result = xx(arr,sum,x,n);
        result == -1 ? printf("-1\n") : printf("%d\n",result);  
    }
    return 0;
}