#include <stdio.h>

int main(){
	// khai bao bien don gia,so luong,thanhtien
	float dongia,soluong,thanhtien;
  // xuat ra man hinh dongia
	printf ("dongia =");
  // nhap don gia
	scanf("%f",& dongia) ;
	printf ("soluong =");
  // xuat ra man hinh so luong
	scanf("%f",& soluong);
  // nhap so luong 
	thanhtien = soluong*dongia;
	// dieu kien 
	if (soluong >= 5 & dongia >= 500){thanhtien =(soluong*dongia)*0.5;
  // xuat ra man hinh 
		printf ("%.f",thanhtien );
		
	
		
	}else {
		printf (" %.f",thanhtien);
	
	}

	
  getchar();
  return 0;
}
