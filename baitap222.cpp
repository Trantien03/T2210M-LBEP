#include<stdio.h>
#include<string.h>
int main(void){
	int a[]={ 1, 2, 0, -2, 5, 2, 7, -6, 22, 10};
	int s1=0;
	int s2=0; 
     for(int i=0;i<10;i++){
        if(a[i]>0){
            s1=s1+a[i];   
            if(s2>s1){
            	s1=s2;
			} 
        }else{
        	if(s1<0){
        		s1=0; 
			} 
		}  
    }
    printf("Tong cac so duong lien tiep lon nhat la %i",s1);
    return 0;
}
