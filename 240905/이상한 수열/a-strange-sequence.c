#include <stdio.h>
int Fuc_1();

int main() {
    int Num_in,a;
    scanf("%d",&Num_in);
    a=Fuc_1(Num_in);
    printf("%d",a);

    return 0;
}

int Fuc_1(int Num_input){
    if(Num_input==1){
        return 1;
    }
    if(Num_input==2){
        return 2;
    }
    return (Fuc_1(Num_input/3)+Fuc_1(Num_input-1));

}