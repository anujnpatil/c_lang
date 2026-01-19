#include <stdio.h>

int main(){
    printf("The table of 10 in reverse order is:\n");
    int n = 10, i;
    for (i=10; i>0; i=i-1){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}