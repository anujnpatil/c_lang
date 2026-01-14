#include <stdio.h>

int main(){
    char alphabet;
    printf("Enter a alphabet:");
    scanf("%c", &alphabet);
    if(alphabet>= 'a' && alphabet<='z'){
        printf("The alphabet is lower case");
    }
    else{
        printf("The alphabet is uppercase");
    }
    return 0;
}