#include<stdio.h>
int main(){
    int n;
	int s=0;
	printf("Nhap n:");
	scanf("%d",&n);
	for(int i=0; i<n; n/=10){
		s=n%10; 
	}
	printf("Chu so dau la: %d",s); 
}
