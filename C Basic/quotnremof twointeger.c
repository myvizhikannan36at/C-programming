#include <stdio.h>
int main() {
    int a,b,div,mod;
    scanf("%d %d",&a,&b);
    div=a/b;
    mod=a%b;

    printf("quot=%d\n",div);
    
    printf("rem=%d\n",mod);
    
    return 0;
}