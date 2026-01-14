#include <stdio.h>
int main() {
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    if(num%11==0){
        printf("This number is divisble by 11");
    }else{
        printf("This number is not divisble by 11");
    }
    
    return 0;
}