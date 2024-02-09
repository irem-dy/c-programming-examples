#include <stdio.h>
#include <math.h>

int main() {
    double yaricap;

    // Kullan�c�dan k�renin yar��ap�n� al
    printf("Kurenin yaricapini giriniz: ");
    scanf("%lf", &yaricap);

    // K�renin alan�n� hesapla (Alan = 4 * ? * r^2)
    double alan = 4 * M_PI * pow(yaricap, 2);

    // K�renin hacmini hesapla (Hacim = (4/3) * ? * r^3)
    double hacim = (4.0 / 3.0) * M_PI * pow(yaricap, 3);

    // K�renin �evresini hesapla (�evre = 2 * ? * r)
    double cevre = 2 * M_PI * yaricap;

    // Sonu�lar� ekrana yazd�r
    printf("Kurenin Alani: %.2lf\n", alan);
    printf("Kurenin Hacmi: %.2lf\n", hacim);
    printf("Kurenin Cevresi: %.2lf\n", cevre);

    return 0;
}

