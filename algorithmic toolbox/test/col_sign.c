#include<stdio.h>
int main()
{
    int n;  //no of segments
    scanf("%d",&n);
    int start[n], end[n]; //2 array to store the start and end points of segments
    int i,j; //counting variables
    int m; //to store the min number of pts.
    //input segments
    for(i=0;i<n;i++)
        scanf("%d %d",&start[i], &end[i]);

    //sorting both arrays in asc order acc to end pts.
    /*for()
    {

    }*/

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(end[i] < start[j])
            {
                m = m+1;
                break;
            }
        }
    }
    printf("%d\n",m );

    

}