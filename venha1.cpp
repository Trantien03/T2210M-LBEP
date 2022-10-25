#include<stdio.h>

int so_dao_nguoc(int n){ 
  int dao_nguoc = 0; 
  while(n>0) {
    dao_nguoc = dao_nguoc*10 + n%10;
    n /= 10;
  }
  return dao_nguoc;
}

int main(){
    int n;
    printf("nhap mot so nguyen duong n: ");
    scanf("%d",&n);
    int so_do_la = so_dao_nguoc(n);
    printf("So dao nguoc la: %d\n",so_do_la );
    return 0;
}
