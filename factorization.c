git remote add origin https://github.com/minimum5/practice.git
git branch -M main
git push -u origin main

int divide(int N){
    int q = 2; //quarter
    
    for(;;++q){
        if(N%q == 0){return q;}
        
        else if(N/q == 0){
            return 1;
        }
        
    }
}

int main()
{
    int n;
    int arr[] = {0};
    int i;
    int index;
    
    printf("자연수 입력: ");
    scanf("%d", &n);
    
    for(i=0; ;i++){
        
    int dec = divide(n);
    
    if(dec == 1){
        index = sizeof(arr)/4-1;
        break;}
    
    else{
        arr[i] = dec;
        n = n/dec;
        }
}

    for(i=0; i<index; i++){
        printf("%d", arr[i]);
        if(i==index-1){continue;}
        printf("x");
    }
    return 0;
}
