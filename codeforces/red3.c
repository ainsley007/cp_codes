#include <stdio.h>
#include <string.h>
void find_frequency(char [], int []);
 
int main()
{ 
   int t;
   scanf("%d",&t);
   while(t--)
   {
      int i,n;
      scanf("%d",&n);
      char string[n];
      gets(string);
      int c, count[26] = {0};
      int result = find_frequency(string, count);
      result == -1 ? printf("no\n"): printf("yes\n");
   }
   return 0;
}

int find_frequency(char s[], int count[]) {
   int c = 0;
   
   while (s[c] != '\0') 
   {
      if (s[c] >= 'a' && s[c] <= 'z' )
         count[s[c]-'a']++;
      c++;
   }
   for(c=0;c<26;c++)
   {
      if(count[c] %2 != 0)
         return -1;
   }
   return 1;
}

