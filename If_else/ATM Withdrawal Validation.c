#include <stdio.h>
int main() {
    int amount;
    printf("Enter the Amount:");
    scanf("%d",&amount);

    if(amount%100==0){
        printf("Valid amount");
    }else{
        printf("Invalid amount");
    }
    
    return 0;
}