#include <stdio.h>

int main() {
    int a = 10;     // Khai bao bien a va gan gia tri 10
    int *ptr = &a;  // Khai bao con tro ptr va gan dia chi cua a cho ptr

    // Cach 1: In gia tri va dia chi cua bien a truc tiep
    printf("Cach 1: Gia tri cua a = %d, Dia chi cua a = %p\n", a, (void*)&a);

    // Cach 2: In gia tri va dia chi cua bien a thong qua con tro ptr
    printf("Cach 2: Gia tri cua a = %d, Dia chi cua a = %p\n", *ptr, (void*)ptr);

    return 0;
}

