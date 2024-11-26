#include <stdio.h>

int main() 
{
    int n, i;
    printf("Hay nhap mot so nguyen bat ki: ");
    scanf("%d", &n);
    printf("Cac uoc cua so %d là: ", n);
    for (i = 1; i <= n; i = i + 1) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}

