#include <stdio.h>

// Faktöriyel hesaplayan fonksiyon
int faktoriyel(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktoriyel(n - 1);
    }
}

// Permütasyon hesaplayan fonksiyon
int permuetasyon(int n, int r) {
    return faktoriyel(n) / faktoriyel(n - r);
}

int main() {
    int n, r;

    // Kullanıcıdan n ve r değerlerini al
    printf("n'i giriniz: ");
    scanf("%d", &n);

    printf("r'i giriniz: ");
    scanf("%d", &r);

    // Permütasyonu hesapla ve ekrana yazdır
    if (n >= r) {
        int sonuc = permuetasyon(n, r);
        printf("P(%d, %d) = %d\n", n, r, sonuc);
    } else {
        printf("Hata: n, r'den küçük olmalıdır.\n");
    }

    return 0;
}

