#include <stdio.h>
int main() {
    int a,b ;
    printf("Enter two number :");
    scanf("%d %d",&a ,&b);
    if(a>b){
        printf("%d is largest number\n",a);
    }else{ 
        printf("%d is largest number\n",b);
    }

    return 0;
}