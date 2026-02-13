#include <stdio.h>
int main() {
    int vl;
    printf("Enter a value :");
    scanf("%d",&vl);

    if(vl>=48&&vl<=57){
        printf("Digit");
    }else{
        printf("Not a Digit");
    }
    
    return 0;
}