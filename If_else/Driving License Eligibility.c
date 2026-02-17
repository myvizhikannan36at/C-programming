#include <stdio.h>
int main() {
    int age;
    printf("Enter the age:");
    scanf("%d",&age);

    if(age>=18&&age<=70){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
    
    return 0;
}