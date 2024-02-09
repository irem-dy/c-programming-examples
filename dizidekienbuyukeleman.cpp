#include <stdio.h>

// Dizideki en b�y�k eleman� bulan fonksiyon
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

    // Kullan�c�dan dizinin boyutunu al
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);

    int dizi[n];

    // Kullan�c�dan diziyi al
    printf("Diziyi giriniz:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }

    // En b�y�k eleman� bul ve ekrana yazd�r
    printf("En b�y�k eleman: %d\n", enBuyukEleman(dizi, n));

    return 0;
}

