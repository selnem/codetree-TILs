#include <stdio.h>

int main() {
    int n, cnt = 0,temp,num=1;
    scanf("%d",&n);
    temp=n;
    while (temp>1){
            temp/=num;
            cnt+=1;
            num+=1;
    }
    printf("%d",cnt);
    return 0;
}