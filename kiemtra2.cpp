#include <stdio.h>
int main (){
    int i;
	int n=10;
	printf("Nhap 10 phan tu\n"); 
    int a[n];
    for(i = 0; i <10; i++){
    	printf("Nhap a[%d]=",i+1); 
        scanf("%d",&a[i]);
	}    
    printf("Thu tu dao nguoc la:\n"); 
    for(i = n-1; i>= 0;--i){
        printf ("% d\n", a[i]);
    }
}
