#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("Divisible by 5");
    } else {
        printf("Not Divisible by 5");
    }

    return 0;
}