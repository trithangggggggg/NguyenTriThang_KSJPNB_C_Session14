#include <stdio.h>

int main() {
    char chuoi[] = "Microsoft";
    char kytu;
    int solan = 0;

    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &kytu);
	 

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == kytu) {
            solan++;
        }
    }

    printf("Ky tu %c xuat hien %d lan trong chuoi.\n", kytu, solan);

    return 0;
}

