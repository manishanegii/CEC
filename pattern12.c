#include<stdio.h>

int main(){
    int n=5;
    int i,j;
    for(i=0; i<n; i++){
        for(j=n; j>i; j--){
            printf(" ");
        }
       for(j=1; j<=i+1; j++){
        printf("%d ",j);
       }
       printf("\n");
    }
    return 0;
}