#include<stdio.h>
int main (){
	int n;
	int i = 0;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	while(i<n && i%2==0 && i%3==0 ){
		i+=6; 
	}printf("so do la: %d",i-6); 
} 
