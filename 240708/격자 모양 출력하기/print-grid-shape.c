#include <stdio.h>

int main() {
    int m,n,x,y;
    scanf("%d %d",&n,&m);
    int arr[50][50];
    for (int i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        arr[x][y]=x*y;
    }
    for (int j=1;j<=n;j++){
        for(int k=1;k<=n;k++){
            printf("%d ",arr[j][k]);
        }
        printf("\n");
    }
    
    return 0;
}