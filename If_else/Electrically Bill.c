#include <stdio.h>
int main() {
    int unit;
    printf("Enter the unit:");
    scanf("%d",&unit);
    
    if(unit<=100){
        printf("Bill :%d",unit*5);
    }else{
        printf("Bill :%d",unit*10);
    }
    return 0;
}