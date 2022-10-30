#include<stdio.h>

double TBCsole(int a[],int n){
	float tbl;
	int dem=0,tongLe=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			tongLe+=a[i];
			dem++;
		}
	}
	tbl=tongLe/dem;
	return tbl;
}
int main(){
	int n;
	printf("Nhap so nguyen n:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
    }
    float tbl= TBCsole(a,n);
    printf("Trung binh cong cac so le la:%0.2f",tbl);
}
   
