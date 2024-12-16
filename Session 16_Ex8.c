#include <stdio.h>
#include <string.h>

void reverseStringUsingPointers(char *input, char *output) {
    int length = strlen(input);
    char *start = input + length - 1; // Con tro tro den ky tu cuoi cua chuoi input
    char *end = output;              // Con tro tro den vi tri bat dau cua chuoi output

    // Dao nguoc chuoi bang cach sao chep ky tu tu cuoi chuoi input sang chuoi output
    while (start >= input) {
        *end = *start;
        start--;
        end++;
    }

    *end = '\0'; // Ky tu ket thuc chuoi output
}

int main() {
    char inputString[100], reverseString[100];

    // Nhap chuoi tu nguoi dung
    printf("Nhap mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Loai bo ky tu xuong dong '\n' neu co
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }

    // Goi ham dao nguoc chuoi
    reverseStringUsingPointers(inputString, reverseString);

    // In ket qua
    printf("Chuoi da nhap: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

