#include <stdio.h>
#include <string.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
      int n,i;
      scanf("%d",&n);
      char string[n+1];
      int c = 0, count[26] = {0}, x;

      //printf("Enter a string\n");
      gets(string);
      // for(i=0;i<n;i++)
      //   scanf("%c",&string[i]);
      // string[n] = '\0';

      while (string[c] != '\0') {
     /* * Considering characters from 'a' to 'z' only and ignoring others. */

      if (string[c] >= 'a' && string[c] <= 'z') {
         x = string[c] - 'a';
         count[x]++;
      }

      c++;
   }

   for (c = 0; c < 26; c++)
   {
      if(count[c]%2!=0)
      {
         printf("no\n");
         return 0;
      }
   }
   printf("yes\n");

   return 0;
   }
}
