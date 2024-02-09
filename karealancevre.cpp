#include <stdio.h>

int main() {
    double kenarUzunlugu;

    // Kullanýcýdan kenar uzunluðunu al
    printf("Karenin bir kenar uzunlugunu giriniz: ");
    scanf("%lf", &kenarUzunlugu);

    // Karenin alanýný hesapla (Alan = kenarUzunlugu * kenarUzunlugu)
    double alan = kenarUzunlugu * kenarUzunlugu;

    // Karenin çevresini hesapla (Çevre = 4 * kenarUzunlugu)
    double cevre = 4 * kenarUzunlugu;

    // Sonuçlarý ekrana yazdýr
    printf("Karenin Alani: %.2lf\n", alan);
    printf("Karenin Cevresi: %.2lf\n", cevre);

    return 0;
}

