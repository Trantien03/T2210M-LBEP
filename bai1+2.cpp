#include<stdio.h>
#include<math.h>  

//bai1 
int chuvitamgiac(int a, int b, int c){
	int x = a+b+c;
	printf("Chu vi: %d", x); 
	return x;	 
} 

//bai2 
  
float dientich(int a, int b, int c) {
float p = (a+ b+ c) / 2.0;
    double S= sqrt(p*(p - a)*(p - b)*(p - c));
    return S; 
}
//bai3 
int tinhTong(int n){
	int s=0; 
	for(int x; n!=0;n/=10 ){
		x = n%10; 
		s+=x;	
	}printf("\nTong cac chu so là: %d",s);    
} 
//bai 4,5
	int ucln(int a, int b){
    while (a*b != 0){ 
        if (a > b){
            a %= b; 
        }else{
            b %= a;
        }
    }return a + b;   
}


//bai 6
bool ktSoChinhPhuong(int n){
	for(int i=1;i*i<= n;i++){
		if(i*i==n){
		return true;
	}else{
	    return false;
        } 
    }
}
//bai7 
int songuyenduongnhonhat(int n){
	n=0;
	int s=0;
	while(s< 10000){
		n++;
		s+=n;
		return n;
	}
	return s;
}
	
//bai 8
bool kiemtra(int n){
	int a,b;
	a=n%10;
	n/=10;
	while(n>0){
		b=n%10;
		n/=10;
		if(b>a){
			return true;
		}
		a=b;
	}
	return false;	
}
int main(){
	int a,b,c,n,p,x;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Nhap x:");
	scanf("%d",&x);
	printf("Nhap p:");
	scanf("%d",&p); 
	printf("Nhap a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	int chuvi = chuvitamgiac(a,b,c);
	printf("Chu vi tam giac la: %d",chuvi);
    double S=dientich(a,b,c); 
	printf("\nDien tich tam giac la: %lf",S); 
    int s=tinhTong(x);
    int max=ucln(a,b);
	printf("\nUoc chung lon nhat la:%d",max); 
	int gan=ucln(a,b);
    printf("\nBoi chung nho nhat la: %d", (a*b)/gan);
    
    
int h=songuyenduongnhonhat(n);
	 printf("\nSo nguyen n nho nhat de tong cua no >10000 la:%d",h);
} 


