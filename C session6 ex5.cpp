#include <stdio.h>

int main() 
{
    int day, month, year;
    printf("Hay nhap nam: ");
    scanf("%d", &year);
    printf("Hay nhap thang: ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Thang khong hop le. Hay nhap lai");
    } else {
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                day = 29;
            } else {
                day = 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            day = 30;
        } else {
            day = 31;
        }
        printf("Thang %d nam %d co %d ngay", month, year, day);
    }

    return 0;
}

