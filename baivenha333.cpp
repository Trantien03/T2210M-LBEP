#include<stdio.h>
int main (){
	int n;
	int i=2; 
	printf("nhap vao so nguyen n: ");
	scanf("%d",&n);
	while(n%i==0 && i<=n/2){
		i++;
	}printf("%d la so nguyen to ",n);	
	}else{
		printf("%d khong la so nguyen to ",n);	
	} 


} 
