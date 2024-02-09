#include <stdio.h>
#include <math.h>

int main() {
    double sayi;

    printf("Bir sayi girin: ");
    scanf("%lf", &sayi);

    double kubikKok = cbrt(sayi);

    printf("%lf'nin küpkökü: %lf\n", sayi, kubikKok);

    return 0;
}

