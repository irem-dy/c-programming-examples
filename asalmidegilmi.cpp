#include <stdio.h>
#include <stdbool.h>

// Asal sayý kontrolü yapan fonksiyon
bool asalKontrol(int sayi) {
    if (sayi < 2) {
        return false; // 2'den küçük sayýlar asal deðildir
    }

    for (int i = 2; i * i <= sayi; i++) {
        if (sayi % i == 0) {
            return false; // Sayý bir böleni varsa asal deðildir
        }
    }

    return true; // Sayý asaldýr
}

int main() {
    int sayi;

    // Kullanýcýdan bir sayý al
    printf("Bir sayý giriniz: ");
    scanf("%d", &sayi);

    // Asal kontrol fonksiyonunu çaðýr ve sonucu ekrana yazdýr
    if (asalKontrol(sayi)) {
        printf("%d sayýsý bir asal sayýdýr.\n", sayi);
    } else {
        printf("%d sayýsý bir asal sayý deðildir.\n", sayi);
    }

    return 0;
}

