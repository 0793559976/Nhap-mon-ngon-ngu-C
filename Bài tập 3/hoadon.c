#include <stdio.h>

int main(){
	// khai bao bien don gia,so luong,thanh tien
	int dongia,soluong,thanhtien;
	printf ("dongia =");
	scanf("%d",& dongia) ;
	printf ("soluong =");
	scanf("%d",& soluong);
	thanhtien = soluong*dongia;
	// dieu kien
	if (soluong >= 5){ thanhtien= (soluong*dongia)*0.75;
		printf ("%d",thanhtien );
		
	
		
	}else {
		printf (" %d",thanhtien);
	
	}

	
  getchar();
  return 0;
}
