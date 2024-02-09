#include <stdio.h>

// Fakt�riyel hesaplayan fonksiyon
int faktoriyel(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktoriyel(n - 1);
    }
}

// Perm�tasyon hesaplayan fonksiyon
int permuetasyon(int n, int r) {
    return faktoriyel(n) / faktoriyel(n - r);
}

int main() {
    int n, r;

    // Kullan�c�dan n ve r de�erlerini al
    printf("n'i giriniz: ");
    scanf("%d", &n);

    printf("r'i giriniz: ");
    scanf("%d", &r);

    // Perm�tasyonu hesapla ve ekrana yazd�r
    if (n >= r) {
        int sonuc = permuetasyon(n, r);
        printf("P(%d, %d) = %d\n", n, r, sonuc);
    } else {
        printf("Hata: n, r'den k���k olmal�d�r.\n");
    }

    return 0;
}

