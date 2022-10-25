#include<stdio.h>

int tong(int n){
	int sum=0;
	int i=1;
   while(i <= n){    
        sum += i;   
        i++;
    }
	return sum;
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
    int sum = tong(n);
	printf("\nKet qua can tim la:%d",sum);
} 
