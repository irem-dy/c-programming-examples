#include <stdio.h>

int main() {
    int kenarSayisi;

    // Kullanýcýdan kenar sayýsýný al
    printf("Cokgenin kenar sayisini giriniz: ");
    scanf("%d", &kenarSayisi);

    // Ýç açýyý hesapla (Ýç açý = (kenarSayisi - 2) * 180 / kenarSayisi)
    double icAci = (kenarSayisi - 2) * 180.0 / kenarSayisi;

    // Sonucu ekrana yazdýr
    printf("Cokgenin bir ic acisi: %.2lf derece\n", icAci);

    return 0;
}

