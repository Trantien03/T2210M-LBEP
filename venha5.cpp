#include<stdio.h>

int tong(int n){ 
	float sum = 0;
	int i = 1; 
	while(i <= n){
    sum += (float)1/i; 
    i++;
    }
	return sum; 
} 
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int sum = (float)tong(n); 
	printf("\nTong S la: %d,%f ",sum); 
} 
