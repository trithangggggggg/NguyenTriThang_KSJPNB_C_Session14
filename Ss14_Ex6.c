#include <stdio.h>

int main() {
    char chuoi[100];
    int count = 0;

    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, 100, stdin);

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", count);

    return 0;
}

