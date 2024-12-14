#include <stdio.h>

// Ham tim kiem phan tu trong mang
int timKiem(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return i;  // Tra ve vi tri cua phan tu tim thay
        }
    }
    return -1;  // Tra ve -1 neu khong tim thay phan tu
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};  // Khai bao mang va gan gia tri
    int size = sizeof(arr) / sizeof(arr[0]);  // Tinh kich thuoc mang
    int value = 7;  // Gia tri can tim kiem

    // Goi ham timKiem va in ra ket qua
    int index = timKiem(arr, size, value);
    if (index != -1) {
        printf("Phan tu %d tim thay tai vi tri %d\n", value, index);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", value);
    }

    return 0;
}

