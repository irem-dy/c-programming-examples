#include <stdio.h>
#include <stdbool.h>

bool asalMi(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (asalMi(sayi))
        printf("%d asal bir sayidir.\n", sayi);
    else
        printf("%d asal bir sayi deðildir.\n", sayi);

    return 0;
}

