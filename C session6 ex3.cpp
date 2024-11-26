#include <stdio.h>

int main ()
{
	int password = 12345;
	int pass;
	printf("Hay nhap mat khau: ");
	scanf("%d", &pass);
	if ( pass != password ) {
		printf("Mat khau sai");
	} else {
		printf("Mat khau dung");
	}
	
	return 0;
}
