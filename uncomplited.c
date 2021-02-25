#include <stdio.h>

int* avr_order(int order[5][3]); //calculate average, descending order
char* pass_fail(int avr);

int main(){
    int students[5][3];
    
    for(int i = 0; i<5; i++){
        printf("학생 %d의 ", i+1);
        for(int j=0; j<3; j++){
            printf("과목%d 점수: ", j+1);
            scanf("%d", &students[i][j]);
        }
    }
    
int* avr_order(int order[5][3]){
    int avr_by_stu[5];
    
    return avr_by_stu;
}

char* pass_fail(int avr){
    if(avr)
    return "합격";
}
