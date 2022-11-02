#include<stdio.h>
#include<string.h>
int main(void){
	int a[]={ 1, 2, 0, -2, 5, 2, 7, -6, 22, 10};
	int s=0;
	int max=0; 
     for(int i=0;i<10;i++){
        if(a[i]>0){
            s=s+a[i];   
            if(s>max){
            	max=s;
			}
        }else{
        	s=0;
		}  
    }
    printf("Tong cac so duong lien tiep lon nhat la %i",s);
    return 0;
}
