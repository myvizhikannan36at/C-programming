#include <stdio.h>
int main() {
    int num1,num2;
    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);
    
    (num1<num2)?printf("%d is smallest"):
    (num1>num2)?printf("%d is smallest",num2):
    printf("");

    /*if(num1<num2){
        printf("%d is smallest",num1);
    }else{
        printf("%d is not smallest",num2);
    }*/

    return 0;
}