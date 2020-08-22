#include<stdio.h>
int calc(int h,int p)
{
    if(p>h)
        return 1;
    
    while(h!=0)
    {
        if(p==0)
            return 0;
        if(h<0)
            return 1;
        
        h = h-p;
        p = p/2;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h, p;
        scanf("%d%d",&h,&p);

        int ans = calc(h,p);
        ans == 0 ? printf("0\n") : printf("1\n");
    }
}