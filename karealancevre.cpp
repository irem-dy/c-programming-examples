#include <stdio.h>

int main() {
    double kenarUzunlugu;

    // Kullan�c�dan kenar uzunlu�unu al
    printf("Karenin bir kenar uzunlugunu giriniz: ");
    scanf("%lf", &kenarUzunlugu);

    // Karenin alan�n� hesapla (Alan = kenarUzunlugu * kenarUzunlugu)
    double alan = kenarUzunlugu * kenarUzunlugu;

    // Karenin �evresini hesapla (�evre = 4 * kenarUzunlugu)
    double cevre = 4 * kenarUzunlugu;

    // Sonu�lar� ekrana yazd�r
    printf("Karenin Alani: %.2lf\n", alan);
    printf("Karenin Cevresi: %.2lf\n", cevre);

    return 0;
}

