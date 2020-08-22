#include<stdio.h>
int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            long long n,k;
            scanf("%lld %lld",&n,&k);
            long long a[n];
            for(int i=0;i<n;i++)
                scanf("%lld",&a[i]);

            long long b[n];
            for(int i=0;i<n;i++)
            {
                if(k%a[i]==0)
                    b[i] = k/a[i];
                
                else
                    b[i] = -1;
            }
            long long min = 9999999999999999;
            int index, count = 0;
            for(int i=0;i<n;i++)
            {
                if(b[i] == -1)
                {
                    count++;
                    continue;
                }
                
                if(b[i] < min)
                {
                    min = b[i];
                    index = i;
                }

            }
            if(count == n)
                printf("-1\n");
            
            else
            {
                printf("%lld\n",a[index]);
            }
            
        }
        return 0;
    }
