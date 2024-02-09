#include <stdio.h>

// Dizideki en büyük elemaný bulan fonksiyon
int enBuyukEleman(int dizi[], int n) {
    int max = dizi[0];

    for (int i = 1; i < n; i++) {
        if (dizi[i] > max) {
            max = dizi[i];
        }
    }

    return max;
}

int main() {
    int n;

    // Kullanýcýdan dizinin boyutunu al
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);

    int dizi[n];

    // Kullanýcýdan diziyi al
    printf("Diziyi giriniz:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }

    // En büyük elemaný bul ve ekrana yazdýr
    printf("En büyük eleman: %d\n", enBuyukEleman(dizi, n));

    return 0;
}

