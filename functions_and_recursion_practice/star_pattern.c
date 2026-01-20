#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter the number of lines star should be printed:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){ //do j<=2*i-1 for odd printing and 2*i for even
            printf("*");
        }
        printf("\n");
    }
    return 0;
}