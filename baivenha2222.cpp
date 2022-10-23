#include<stdio.h>
int main(){
	int a,b,x,y;
		printf("Nhap a: ");
		scanf("%d",&a); 
		printf("\nNhap b: ");
		scanf("%d",&b);
	for(x=a;x>=1;x--){
        if (a%x==0 && b%x==0){
            printf("UCLN(%d,%d)=%d\n",a,b,x);
        }
    }
    for (y=a;y<=a*b;y++){
        if (y%a==0 && y%b==0){
            printf("BCNN(%d,%d)=%d\n",a,b,y);
        }
    }
}

