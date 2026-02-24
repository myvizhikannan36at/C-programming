#include <stdio.h>
int main() {
    int ticket;
    printf("Enter the number of ticket:");
    scanf("%d",&ticket);

    if(ticket>0){
        printf("Confirmed");
    }else{
        printf("Waiting list");
    }
    
    return 0;
}