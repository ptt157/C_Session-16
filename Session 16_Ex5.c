#include <stdio.h>

// Ham cap nhat phan tu trong mang
void capNhatPhanTu(int *arr, int value, int index) {
    *(arr + index) = value;  // Cap nhat gia tri moi cho phan tu tai vi tri index
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Khai bao mang va gan gia tri
    int size = sizeof(arr) / sizeof(arr[0]);  // Tinh kich thuoc mang

    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Goi ham capNhatPhanTu de cap nhat phan tu tai vi tri 2 (index = 2) thanh gia tri 10
    capNhatPhanTu(arr, 10, 2);

    // In mang sau khi cap nhat
    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

