#include <stdio.h>

int main(){
    int n = 8, i, sum = 0;
    for (i = 1; i<=10; i = i + 1){
        sum = sum + (n*i);
    }
    printf("The sum of first 10 multiples of 8 is %d", sum);
    return 0;
}