#include <stdio.h>

int main() {
    int kenarSayisi;

    // Kullan�c�dan kenar say�s�n� al
    printf("Cokgenin kenar sayisini giriniz: ");
    scanf("%d", &kenarSayisi);

    // �� a��y� hesapla (�� a�� = (kenarSayisi - 2) * 180 / kenarSayisi)
    double icAci = (kenarSayisi - 2) * 180.0 / kenarSayisi;

    // Sonucu ekrana yazd�r
    printf("Cokgenin bir ic acisi: %.2lf derece\n", icAci);

    return 0;
}

