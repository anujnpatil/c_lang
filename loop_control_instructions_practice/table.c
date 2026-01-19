#include <stdio.h>

int main(){
    int n,i;
    printf("Enter number:");
    scanf("%d",&n);
    printf("The table of %d is:\n", n);
    for (i=1; i<=10; i=i+1){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}