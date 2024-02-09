#include <stdio.h>
#include <math.h>

double geometrikOrtalama(int n, double dizi[]) {
    double carpim = 1.0;

    for (int i = 0; i < n; i++) {
        carpim *= dizi[i];
    }

    return pow(carpim, 1.0 / n);
}

int main() {
    int n;

    printf("Sayi dizisinin uzunlugunu girin: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Geçersiz giriþ. Pozitif bir sayi bekleniyor.\n");
        return 1;  // Hata kodu
    }

    double dizi[n];

    printf("Sayilari girin:\n");

    for (int i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%lf", &dizi[i]);
    }

    double geoOrtalama = geometrikOrtalama(n, dizi);

    printf("Geometrik Ortalama: %lf\n", geoOrtalama);

    return 0;
}

