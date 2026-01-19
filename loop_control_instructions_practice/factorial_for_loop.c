#include <stdio.h>

int main (){
    int n, i;
    long long fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 1; i<=n; i = i + 1){
        fact = fact*i;
    }
    printf("The factorial of %d is %lld", n, fact);
    return 0;
}