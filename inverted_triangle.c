#include <stdio.h>

int main() {
    int baris;
    printf("Masukan angka: ");
    scanf("%d", &baris);

    while  (baris > 0) {
        int kolom = baris;

        while (kolom > 0) {
            printf(" * ");
            kolom = kolom  - 1;
        }
        printf("\n");
        baris = baris - 1;
    }
    return 0;
}
