#include <stdio.h>
 
int lcm(int *arr, int n)
{
    int i =0;
    int m = arr[0];
 
    while (1) {
      
      for (i = 0; i < n; i++) {
        if(m % arr[i]) break;
      }
      if( i == n) break;
      m++;
    }
 
    return m;
}
 
int main()
{
  int t;
  scanf("%d",&t);

  while(t--)
  {
    int result, size;
    int n;
    int i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    
    result = lcm(arr, n);
    if(result%2 == 0)
      printf("no\n");
    else
      printf("yes\n");
  }
  
  return 0;
}