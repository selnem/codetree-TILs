#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&b,&a);
    while (b>=a){
        printf("%d ",b);
        b-=2;
    }
    return 0;
}