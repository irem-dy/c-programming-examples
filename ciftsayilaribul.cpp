#include <stdio.h>

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    printf("0'dan %d'e kadar olan cift sayilar:\n", sayi);

    for (int i = 0; i <= sayi; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

