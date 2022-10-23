#include<stdio.h>
int main(){
	int n;
	int s=0; 
	printf("nhap n:");
	scanf("%d",&n); 
	for(int so_tach_ra; n!=0;n/=10 ){
		so_tach_ra = n%10; 
		s+=so_tach_ra;
	} 
	printf("Tong cac chu so là: %d",s); 
} 
