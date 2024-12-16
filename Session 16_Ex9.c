#include <stdio.h>

void insertElement(int arr[], int *size, int newValue, int position) {
    // Kiem tra vi tri co hop le hay khong
    if (position < 0 || position > *size) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    // Dich cac phan tu phia sau vi tri chen
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Them gia tri moi vao vi tri da chi dinh
    arr[position] = newValue;

    // Tang kich thuoc cua mang
    (*size)++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Mang ban dau
    int size = 5;                  // Kich thuoc hien tai cua mang

    // In mang ban dau
    printf("Mang ban dau: ");
    printArray(arr, size);

    // Goi ham them phan tu
    insertElement(arr, &size, 10, 2);

    // In mang sau khi them phan tu
    printf("Mang sau khi them: ");
    printArray(arr, size);

    return 0;
}

