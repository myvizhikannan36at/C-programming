#include <stdio.h>
int main() {
    int speed;
    printf("Speed of the Bike:");
    scanf("%d",&speed);
    
    if(speed>80){
        printf("Speed limit Exceeded\n");
        printf("Fine Issued\n");
    }else{
        printf("Within Speed limit");
    }

    return 0;
}