#include<stdio.h>
#include<math.h>
int main (){
	int X;
	scanf("%d",&X);
	if(X <= 100000000){
		printf("5%%"); 
	}else{
		if(X <= 300000000){
			printf("10%%"); 
		}else{
			if(X > 300000){
				printf("20%%"); 
			} 
		} 
	} 
} 
