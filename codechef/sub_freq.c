#include<stdio.h>
int ans[99999999];
void answer(int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",ans[i]);
}
void printPath(int a[], int li,int n)
{
    int c[n];
    
    for(int i=0;i<n;i++)
    {
        c[i] = 0;
        ans[i] = 0;
    }
    
    for(int i=0;i<=li;i++)
    {
        c[a[i]-1]++ ; 
    }
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(c[i] == max)
        {
            ans[i]++;
            break;
        }
    }
    // for(int i=0;i<=li;i++)
    //     printf("%d ",a[i]);

    // printf("\n");
}
void printHelp(int a[],int n,int idx,int p[],int pi)
{
    if(idx>=n)
        return;
    p[pi] = a[idx];

    printPath(p, pi,n);

    for(int i=idx+1;i<n;i++)
        printHelp(a, n, i, p, pi+1);

    answer(n);
    return;
}

void printSub_seq(int a[], int n)
{
    int p[n];


    for(int i=0;i<n;i++)
        printHelp(a,n,i,p,0);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printSub_seq(a,n);
    return 0;
}