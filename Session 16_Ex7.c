#include <stdio.h>

// Ham sap xep mang su dung thuat toan Bubble Sort
void sapXep(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Hoan vi hai phan tu
                int tam = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tam;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 8, 6};  // Khai bao mang va gan gia tri
    int size = sizeof(arr) / sizeof(arr[0]);  // Tinh kich thuoc mang

    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Goi ham sapXep de sap xep mang
    sapXep(arr, size);

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

