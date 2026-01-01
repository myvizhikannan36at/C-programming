#include <stdio.h>
int main() {
    int temp;
    scanf("%d", &temp);

    if (temp > 35)
        printf("Hot");
    else
        printf("Normal");

    return 0;
}