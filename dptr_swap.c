#include <stdio.h>
int swap_ptr(int ** ppa, int ** ppb);
int main()
{
    int a,b;
    int * pa, *pb;
    pa = &a;
    pb = &b;
    printf("----변환 전--- \n");
    printf("pa가 가리키는 변수의 주소값: %p \n", pa);
    printf("pa의 주소값: %p \n", &pa);
    printf("pb가 가리키는 변수의 주소값: %p \n", pb);
    printf("pb의 주소값: %p \n", &pb);
    swap_ptr(&pa, &pb);
    printf("-----변환 후---- \n");
    printf("pa가 가리키는 변수의 주소값: %p \n", pa);
    printf("pa의 주소값: %p \n", &pa);
    printf("pb가 가리키는 변수의 주소값: %p \n", pb);
    printf("pb의 주소값: %p \n", &pb);
}

int swap_ptr(int ** ppa, int **ppb){
    int * temp = *ppa;
    printf("ppa가 가리키는 변수의 주소값: %p \n", *ppa);
    printf("ppb가 가리키는 변수의 주소값: %p \n", *ppb);
    
    *ppa = *ppb;
    *ppb = *ppa;
    
    return 0;
}
