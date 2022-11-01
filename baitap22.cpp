#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	printf("Nhap vao mot chuoi: ");
	scanf("%s",s);
	int nguyenam=0;
	int phuam=0;
	int i=0;
	while(s[i++] != '\0') {
      if(s[i] =='a'&&s[i]=='e'&&s[i]=='i'&&s[i]=='o'&&s[i]=='u'){
      	nguyenam++;
	}else{
		phuam++;	 
	}  
	printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, nguyenam, phuam);

   return 0;
   }
} 
