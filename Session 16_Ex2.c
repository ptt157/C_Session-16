#include <stdio.h>

// Ham su dung con tro de doi gia tri cua hai bien
void doiGiaTri(int *x, int *y) {
    int tam = *x;  // Luu tru gia tri cua x
    *x = *y;       // Gan gia tri cua y cho x
    *y = tam;      // Gan gia tri da luu tru cua x cho y
}

int main() {
    int a = 5, b = 10;  // Khai bao va gan gia tri cho hai bien

    // In gia tri ban dau cua hai bien
    printf("Truoc khi doi gia tri: a = %d, b = %d\n", a, b);

    // Goi ham de doi gia tri cua hai bien
    doiGiaTri(&a, &b);

    // In gia tri sau khi doi
    printf("Sau khi doi gia tri: a = %d, b = %d\n", a, b);

    return 0;
}

