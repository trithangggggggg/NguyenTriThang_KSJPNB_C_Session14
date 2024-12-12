#include <stdio.h>

int main() {
    char chuoi[100];
    int count = 0;
    int i = 0;

    printf("Nhap chuoi bat ky: ");
    fgets(chuoi,100, stdin);

    while (chuoi[i] != '\0') {
        if (chuoi[i] == '\n') {
            chuoi[i] = '\0';
            break;
        }
        i++;
    }

    int trongTu = 0;
    for (i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] != ' ') {
            if (trongTu == 0) {
                count++;
                trongTu = 1;
            }
        } else {
            trongTu = 0;
        }
    }

    printf("So tu trong chuoi: %d\n", count);

    return 0;
}

