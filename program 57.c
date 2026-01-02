#include <stdio.h>
int main() {
    int salary;
    scanf("%d", &salary);

    if (salary >= 20000)
        salary = salary + 2000;
    else
        salary = salary + 1000;

    printf("%d", salary);
    return 0;
}