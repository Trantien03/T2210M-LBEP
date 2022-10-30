#include<stdio.h>


int LeCuoi(int a[],int n){
	for(int i=n-1;i>=0;i--)
		if(a[i]%2==1){
		printf("So le cuoi cung trong mang la%d",a[i]);
            break;
		}
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int lecuoi=LeCuoi(a,n);
	
	
}
