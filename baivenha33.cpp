#include<stdio.h>
#include<math.h>
int main (){
	int a;
	int b;
	int c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	float tb = (a + b +c)/3;
	if(tb >= 9.0){
		printf("H?ng A"); 
	}else{
		if(tb >= 7.0 && tb < 9.0){
			printf("H?ng B"); 	
		}else{
			if(tb >= 5.0 && tb < 7.0){
				printf("H?ng C"); 
			}else{
				if(tb < 5.0){
					printf("H?ng F"); 
				} 
			} 
		} 
	} 
} 
