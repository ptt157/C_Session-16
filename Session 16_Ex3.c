#include <stdio.h>

// Ham su dung con tro de tinh tong hai so nguyen
void tinhTong(int *x, int *y, int *result) {
    *result = *x + *y;  // Tinh tong cua x va y, luu vao result
}

int main() {
    int a = 7, b = 3, tong;  // Khai bao va gan gia tri cho hai bien a, b va bien tong

    // Goi ham tinh tong va truyen dia chi cua a, b, tong
    tinhTong(&a, &b, &tong);

    // In ket qua tong
    printf("Tong cua hai so %d va %d la: %d\n", a, b, tong);

    return 0;
}

