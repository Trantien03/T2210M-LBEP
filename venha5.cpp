#include<stdio.h>

int tong(int n){ 
	float sum = 0;
	int i = 1; 
	while(i <= n){
    sum += (float)1.0/i; 
    i++;
    }
    printf("\ntong can tim la: %lf",sum);
	return sum; 
} 
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int sum = tong(n); 
} 
