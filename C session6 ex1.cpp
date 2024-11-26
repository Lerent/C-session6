#include <stdio.h>

int main() 
{
	int num, i, Tong = 0;
	for( i = 1; i <= 5; i = i + 1 ) {
			printf("Hay nhap so thu %d: \n", i);
	        scanf("%d", &num);
	        if (num % 2 != 0) {
		       Tong += num;
	       }
	}
	printf("Tong cua cac so le la: %d", Tong);
	
	return 0;
}
