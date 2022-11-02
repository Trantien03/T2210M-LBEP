#include<stdio.h>
#include<string.h>
int main(void){
	int a[]={ 1, 2, 0, -2, 5, 2, 7, -6, 22, 10};
	int dem =0;
	int nhieunhat=0;
	for(int i=0;i<10;i++){
		if(a[i]>0){
			dem++;
			if(dem>nhieunhat){
			nhieunhat=dem;
		    }
		}else{
			dem=0;
		}
	}
	printf("Co nhieu nhat %i so duong lien ke nhau",nhieunhat);
	return 0;
}
