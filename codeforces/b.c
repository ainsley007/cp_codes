#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long a[n], b[n];
        for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
        for(int i=0;i<n;i++)
        scanf("%lld",&b[i]);

        long long min1 = a[0], min2 = b[0];
        for(int i=0;i<n;i++)
        {
            if(a[i<min1])
                min1 = a[i];
            
            if(b[i]<min2)
                min2 = b[i];
        }

        long long count = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]-min1 > b[i]-min2)
                count += a[i]-min1;

            else
                count += b[i]-min2;
        }
        printf("%lld\n",count);
    }
    return 0;

}