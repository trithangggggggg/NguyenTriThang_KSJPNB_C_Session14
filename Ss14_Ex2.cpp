#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Rikkei Academy";

    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]);
    }

    return 0;
}

