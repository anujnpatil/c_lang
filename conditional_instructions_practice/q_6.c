#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter four integers:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        printf("%d is the greatest", a);
    }
    else if (b>a && b>c && b>d){
        printf("%d is the greatest", b);
    }
    else if(c>a && c>b &&c>d){
        printf("%d is the greatest", c);
    }
    else{
        printf("%d is the greatest", d);
    }
    return 0;
}