#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if (n >= -9 && n <= 9)
        printf("Single Digit");
    else
        printf("Not Single Digit");

    return 0;
}