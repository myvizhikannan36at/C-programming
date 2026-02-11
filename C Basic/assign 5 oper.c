#include <stdio.h>
int main() {
    int a, b, q, r;

    scanf("%d %d", &a, &b);

    q = a;
    r = a;

    q /= b;
    r %= b;

    printf("%d %d", q, r);

    return 0;
}
