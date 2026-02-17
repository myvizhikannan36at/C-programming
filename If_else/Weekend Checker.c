#include <stdio.h>
int main() {
    int day;
    printf("Enter the day:");
    scanf("%d",&day);

    if(day>=1&&day<=7){
        if(day==6||day==7){
            printf("Weekend");
        }else{
            printf("Weekday");
        }
    }else{
        printf("Invalid day");
    }
    return 0;
}