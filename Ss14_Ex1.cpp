#include <stdio.h>

int main() {
    char chuoi[100];

    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    printf("Chuoi vua nhap: %s", chuoi);
    printf("Do dai chuoi: %lu\n", strlen(chuoi) - 1);

    return 0;
}

