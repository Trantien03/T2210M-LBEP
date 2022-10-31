#include<stdio.h>
 int main(){
 	int n;
 	printf("Nhap n:");
 	scanf("%d",&n);
 	int a[n];
 	for(int i=0;i<n;i++){
 		printf("Nhap a[%d]=",i);
 		scanf("%d",&a[i]);
	}
    int x;
    printf("Nhap x:");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
    	if(x==a[i]){
    		printf("\n%d co trong mang",x);	
		} 
			printf("\n%d khong co trong mang",x);  
	}			
}
