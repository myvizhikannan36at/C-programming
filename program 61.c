#include <stdio.h>
int main() {
    int units, bill;
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1;
    else
        bill = units * 2;

    printf("%d", bill);
    return 0;
}