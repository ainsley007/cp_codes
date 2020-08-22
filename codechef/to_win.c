#include<stdio.h>
int cmpfunc(void const *a, void const *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int t;
    sacnf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long arr[n];
}
