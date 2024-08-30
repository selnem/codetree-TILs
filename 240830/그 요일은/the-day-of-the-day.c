#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool is_in_array(int a, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == a) {
            return true;
        }
    }
    return false;
}
int main() {
    int m1,d1,m2,d2,numSum=0,cnt,dayCnt;
    int cal_30[4]={4,6,9,11};
    int cal_31[7]={1,3,5,7,8,10,12};
    char day_in[4];
    scanf("%d %d %d %d",&m1,&d1,&m2,&d2);
    scanf("%s",&day_in);
    for (int i=m1;i<m2;i++){
        if (is_in_array(i,cal_30,4)){
            numSum+=30;
        }
        else if (is_in_array(i,cal_31,7)){
            numSum+=31;
        }
        else{
            numSum+=29;
        }
    }
    numSum-=d1;
    numSum+=d2;
    numSum++;
    cnt=(numSum/7);
    
    if (strcmp(day_in,"Mon")==0){
        dayCnt=1;
    }
    else if (strcmp(day_in,"Tue")==0){
        dayCnt=2;
    }
    else if (strcmp(day_in,"Wed")==0){
        dayCnt=3;
    }
    else if (strcmp(day_in,"Thu")==0){
        dayCnt=4;
    }
    else if(strcmp(day_in,"Fri")==0){
        dayCnt=5;
    }
    else if(strcmp(day_in,"Sat")==0){
        dayCnt=6;
    }
    else if(strcmp(day_in,"Sun")==0){
        dayCnt=8;
    }
    else{
        printf("error");
    }


    if (numSum%7>=dayCnt){
        cnt++;
    }
    printf("%d",cnt);

    return 0;
}