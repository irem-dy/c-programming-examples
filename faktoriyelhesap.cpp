#include <stdio.h>

int faktoriyel(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktoriyel(n - 1);
}

int main() {
    int sayi;

    printf("Faktöriyeli hesaplanacak sayiyi girin: ");
    scanf("%d", &sayi);

    printf("Faktöriyel: %d\n", faktoriyel(sayi));

    return 0;
}

