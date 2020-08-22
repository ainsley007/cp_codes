#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int c ,r;
        scanf("%d%d",&c,&r);
        
        int c1 , r1;
        if(c%9 == 0)
            c1 = c/9;
        else
            c1 = (c/9) + 1;

        if(r%9 == 0)
            r1 = r/9;
        else
            r1 = (r/9) + 1;

        if(c1 == r1)
        {
            printf("1 %d\n",r1);
        }
        else if(c1 > r1)
        {
            printf("1 %d\n",r1);
        }
        else if(r1 > c1)
        {
            printf("0 %d\n",c1);
        }
    }
    return 0;
}