#include <stdio.h>

int max(int a, int b);

int main(){
    int a, b;
    int(*pfuc)(int, int);
    
    pfuc = max;
    scanf("%d %d", &a, &b);
    
    printf("%d", max(a, b));
    printf("%d",pfuc(a, b));
}

int max(int a, int b){
    if(a>b)
        return a;
    else if(b>a);
        return b;
}
