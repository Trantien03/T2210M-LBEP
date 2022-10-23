#include<stdio.h>
int main (){
	int n;
	int max=0;
	int i=0; 
	printf("Nhap so nguyen duong n:");
	scanf("%d",&n); 
	if(n>0){
		i=n%10; 
	}while(i>max){
		max=i;
		n/=10; 
	}
	printf("So lon nhat cua so nguyen duong n la: %d",max); 
} 
