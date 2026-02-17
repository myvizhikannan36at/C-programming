#include <stdio.h>
int main() {
    int count;
    printf("Number of Try:");
    scanf("%d",&count);

    if(count<=3&&count>=0){
        printf("Login allowed");
    }else{
        printf("Account locked");
    }
    return 0;
}