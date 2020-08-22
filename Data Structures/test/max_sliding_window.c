#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int m;
    scanf("%d",&m);
    int max = 0;
    for(int i=0;i<m;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    for(int i=m+1;i<n;i++)
    {

    }
}