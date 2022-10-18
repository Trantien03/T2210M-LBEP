#include <stdio.h>
#include <math.h>
int main(){
    float luong_goc, luong_rong, thue_thu_nhap; 
    printf("nhap luong goc: ");
    scanf("%f",&luong_goc);
    if(luong_goc > 15){
    	thue_thu_nhap = luong_goc * 30/100;
		luong_rong = luong_goc - thue_thu_nhap;
		printf("\n thue thu nhap la:%f",thue_thu_nhap);
		printf("\n luong rong la:%f",luong_rong); 
	}else{
		if(luong_goc <= 15 && luong_goc >= 7){
		    thue_thu_nhap = luong_goc * 20/100;
		    luong_rong = luong_goc - thue_thu_nhap;
		    printf("\n thue thu nhap la:%f",thue_thu_nhap);
		    printf("\n luong rong la:%f",luong_rong);	
		}else{
			if(luong_goc < 7){
			thue_thu_nhap = luong_goc * 10/100;
		    luong_rong = luong_goc - thue_thu_nhap;
		    printf("\n thue thu nhap la:%f",thue_thu_nhap);
		    printf("\n luong rong la:%f",luong_rong);	
			} 
		} 
    }
}
