#include <stdio.h>
int multiple(int i, int n, int k);
int main(){
	int n;
	int i = 1;
	int k = 1;
	
	printf("Put N \n");
	scanf("%d", &n);
	
	multiple(i, n, k);
	
	return 0;
}
 int multiple (int i, int n, int k){
 	i*=k;
 	k++;
 	
 	if(k>n){
    printf("%d", i);}
 	
 	else{multiple(i, n, k);}
 	
 	return 0;
 }
