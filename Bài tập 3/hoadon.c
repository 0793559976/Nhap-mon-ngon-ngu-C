#include <stdio.h>
int main(){
	// khai bao bien don gia,so luong,thanhtien
	float dongia,thanhtien;
	int soluong;
	printf ("dongia =");
	scanf("%f",&dongia) ;
	printf ("soluong =");
	scanf("%d",&soluong); 
	thanhtien = soluong*dongia;
	// dieu kien 
	if (soluong >= 5 & dongia >= 500){thanhtien =(thanhtien)*0.5;
		printf ("%.f",thanhtien );
	}else {
		printf (" %.f",thanhtien);
	}

  getchar();
  return 0;
}

