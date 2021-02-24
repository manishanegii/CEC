#include <stdio.h>
int main()
{
    int n =5;
    int i, j, space = 1;
    space = n - 1;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= space; j++)
        printf(" ");
        space--;
        for (j = 1; j <= i-1; j++)
        printf("* ");
        printf("\n");    
    }    
    space = 1;
    for (i = 1; i <= n - 1; i++){
        for (j = 1; j <= space; j++)
        printf(" ");
        space++;
        for (j = 1 ; j <= (n-i)-1; j++)
        printf("* ");
        printf("\n");       
    }
    return 0; 
}