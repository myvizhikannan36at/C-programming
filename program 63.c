#include <stdio.h>
int main() {
    int cost, sell;
    scanf("%d %d", &cost, &sell);

    if (sell > cost)
        printf("Profit");
    else
        printf("Loss");

    return 0;
}