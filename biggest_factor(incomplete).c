#include <stdio.h>
int big_divisor(int* nums, int a);
int main()
{
    
    int N;
    printf("최대공약수를 구할 수들의 개수: ");
    scanf("%d", &N);
    int num[N];
    
    printf("최대공약수를 구할 수들 입력 \n");
    
    for(int i=0; i<N; i++){
        scanf("%d", &num[i]);   
    }
    
    big_divisor(num, N);
    
    
}

int big_divisor(int *nums, int a){
    int i;
    int m; //나누어지는 수
    int s= nums[1]; //나누는 수
    int r; //나머지
    
    
    for(int i=0; i<a; i++){
        int m = nums[i];
        while(m%s !=0){
            m=s;
            s=m%s;
        }
        
    }
    
    printf("%d", s);
    
}
