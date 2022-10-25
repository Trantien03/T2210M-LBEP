#include<stdio.h>

int basonguyen(int a,int b,int c){
	int max;
    max = a;
    if(max < b){
    	max = b;
	}
    return b; 
    if(max < c){
    	max = c;
	}
    return c;  
}
 int main(){
    int a, b, c, max;
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
    printf("\nNhap c: ");
    scanf("%d", &c);
    max= basonguyen(a,b,c);
    printf("\nSo lon nhat trong 3 so %d, %d, %d, la: %d", a, b, c);
    return 0; 
}



