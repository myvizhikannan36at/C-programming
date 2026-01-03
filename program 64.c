#include <stdio.h>
int main() {
    int attendance;

    scanf("%d", &attendance);

    if (attendance >= 75)
        printf("Allowed");
    else
        printf("Not Allowed");

    return 0;
}