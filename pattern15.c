#include <stdio.h>

int main()
{
    int n = 3;
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
        printf(" ");
        }   
        for(j=1; j<=(i*2-1); j++){
            printf("%d", j);
        }
        printf("\n");
    }
    
    for(i=n-1; i>=1; i--){
        for(j=1; j<=n-i; j++){
        printf(" ");
        }
        for(j=1; j<=(i*2-1); j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}