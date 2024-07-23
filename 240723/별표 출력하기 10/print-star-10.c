#include <stdio.h>
int print_star(int num){
    for (int i=1;i<=num;i++){
        printf("* ");
    }
    printf("\n");
    return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    for (int j=1;j<=(2*n);j++){

        if (j%2!=0){
            print_star((j+1)/2);
        }
        else{
            print_star(n-((j-2)/2));
        }
    }
    
    return 0;
}