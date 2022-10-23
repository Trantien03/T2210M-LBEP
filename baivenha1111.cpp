#include<stdio.h>
int main (){
	int n;
	long S=0;
	do{
		printf("Nhap so nguyen n lon hon 0: ");
		scanf("%d",&n); 
	}while(n<=0);
	printf("\n Cac uoc so cua %d la: ",n); 
		for(int i=1; i<=n; i++){
			if(n%i==0){
			printf("%4d", i);
		    S=S+i;	
			} 
		}		  
	    printf("\n Tong uoc cua n la: %ld",S); 
} 
