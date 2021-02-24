#include <stdio.h>

int main() {
    int n = 5;
   int i,j;
   for(i = 1; i <= n; i++) {
      for(j = 1; j < i; j++)
         printf(" "); 
      for(j = i; j <= n; j++)
         printf("%d ",n-j+1);
      printf("\n");
   }
   return 0;
}