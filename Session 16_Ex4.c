#include <stdio.h>

// Ham su dung con tro de in tat ca phan tu trong mang
void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu %d: %d\n", i + 1, *(arr + i));  // In phan tu tai vi tri i
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Khai bao mang va gan gia tri
    int size = sizeof(arr) / sizeof(arr[0]);  // Tinh kich thuoc mang

    // Goi ham inMang de in tat ca phan tu trong mang
    inMang(arr, size);

    return 0;
}

