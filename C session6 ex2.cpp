#include <stdio.h>

int main ()
{
	int num, i, Chan = 0, Le = 0;
	for(i = 1; i <= 5; i = i + 1) {
		printf("Hay nhap so thu %d: \n", i);
		scanf("%d", &num);
		if(num % 2 != 0) {
			Le = Le + 1;
		} else {
			Chan = Chan + 1;
			}
		}
		printf("Co %d so le\n", Le);
		printf("Co %d so chan", Chan);
		
	return 0;	
}

