#include <stdio.h>

int main() {
    int n;

    printf("Kac adet sayi gireceksiniz: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Geçersiz giriþ. Pozitif bir sayi bekleniyor.\n");
        return 1;  // Hata kodu
    }

    double toplam = 0.0, sayi;

    printf("%d adet sayiyi girin:\n", n);

    for (int i = 0; i < n; i++) {
        printf("Sayi %d: ", i + 1);
        scanf("%lf", &sayi);
        toplam += sayi;
    }

    double aritmetikOrtalama = toplam / n;

    printf("Aritmetik Ortalama: %lf\n", aritmetikOrtalama);

    return 0;
}

