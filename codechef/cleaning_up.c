    #include<stdio.h>
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--)
        {
            int n,m;
            scanf("%d%d",&n,&m);
            int x, tot[n+1], chef[n+1], ass[n+1];
            for(int i=0;i<n+1;i++)
            {
                tot[i]=0;
                chef[i] = 0;
                ass[i] = 0;
            }
            for(int i=0;i<m;i++)
            {
                scanf("%d",&x);
                tot[x] = 1;
            }
            
            int flag = 0;
            for(int i=1;i<=n;i++)
            {
                if(flag == 0 && tot[i] == 0)
                {
                    chef[i] = i;          
                    flag = 1;     
                }
                else if(flag == 1 && tot[i] == 0)
                {
                    ass[i] = i;
                    flag = 0;
                }
            }
            for(int i=1;i<=n;i++)
            {
                if(chef[i] == 0)
                    continue;
                else 
                    printf("%d ",chef[i]);
            }
            printf("\n");
            for(int i=1;i<=n;i++)
            {
                if(ass[i] == 0)
                    continue;
                else 
                    printf("%d ",ass[i]);
            }

        }
        return 0;
    }