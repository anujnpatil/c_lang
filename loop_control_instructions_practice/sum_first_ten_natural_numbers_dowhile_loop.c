#include <stdio.h>

int main(){
    int i = 1, sum = 0;
    do {
        sum = sum + i;
        i = i + 1;
    }
    while (i<=10);
    printf("The sum of first ten natural numbers is: %d", sum);
    return 0;
}