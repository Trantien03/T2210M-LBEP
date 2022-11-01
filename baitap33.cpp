#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	printf("Nhap chuoi a:");
	scanf("%s",a); 
	printf("Nhap chuoi b:");
	scanf("%s",b);
	int found=0;
	for(int i=0;i<=b[100];i++){
		if(strchr(a,b[i])){
			found=1; 
		}else{
			found=0;
			break; 
		} 
	} 
	if(found==1){
		printf("Chuoi b nam trong chuoi a"); 
	}else{
	    printf("Chuoi b  khong nam trong chuoi a"); 	
	} 
	    
} 

