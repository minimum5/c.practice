#include <stdio.h>
int number_order(int * parr);
int main()
{
    int i;
    int n;
    int arr[10];
    int narr[10];
    
    printf("숫자 10개를 입력하세요: ");
    
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<10; i++){
        n=number_order(arr);
        narr[i] = arr[n];
        arr[n] = 0;
    }
    
    for(i=0; i<10; i++){
    printf("%d", narr[i]);
    }
    
    

    return 0;
}

int number_order (int*parr){
    int i;
    int max = parr[0];
    int n;
    
    for(i=0; i<10; i++){
        
            if(parr[i]>=max){
            max = parr[i];
            n = i;
            }
    }
    
    return n;
    
}
