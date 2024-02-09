#include <stdio.h>
#include <stdbool.h>

// Asal say� kontrol� yapan fonksiyon
bool asalKontrol(int sayi) {
    if (sayi < 2) {
        return false; // 2'den k���k say�lar asal de�ildir
    }

    for (int i = 2; i * i <= sayi; i++) {
        if (sayi % i == 0) {
            return false; // Say� bir b�leni varsa asal de�ildir
        }
    }

    return true; // Say� asald�r
}

int main() {
    int sayi;

    // Kullan�c�dan bir say� al
    printf("Bir say� giriniz: ");
    scanf("%d", &sayi);

    // Asal kontrol fonksiyonunu �a��r ve sonucu ekrana yazd�r
    if (asalKontrol(sayi)) {
        printf("%d say�s� bir asal say�d�r.\n", sayi);
    } else {
        printf("%d say�s� bir asal say� de�ildir.\n", sayi);
    }

    return 0;
}

