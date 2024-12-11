#include <stdio.h>

int main() {
    char chuoi[] = "sam sung ";
    int dodai = 0;

    while (chuoi[dodai] != '\0') {
        dodai++;
    }

    printf("Chuoi dao nguoc: ");
    for (int i = dodai - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }

    return 0;
}

