#include <stdio.h>

int row(int x,int y,int z){
    for (int j=y;j>=x;j-=2){
        if (j!=x){
            printf("%d * %d = %d / ",j,z,j*z);
        }
        else if (j==x){
            printf("%d * %d = %d",j,z,j*z);
        }
        else{
            printf("error");
        }
    
    }

    return 0;
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i=1;i<=9;i++){
        row(a,b,i);
        printf("\n");
        }

    return 0;
    }