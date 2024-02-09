#include <stdio.h>
#include <string.h>

#define MAX_CHARACTERS 200

int main() {
    char metin[MAX_CHARACTERS + 1]; // +1 sonland�r�c� karakter i�in
    int karakterSayisi[256] = {0};  // ASCII karakterlerinin say�s�n� tutacak dizi
    int maxTekrar = 0;
    char enCokTekrarlananKarakter;

    printf("Metni giriniz (en fazla 200 karakter): ");
    fgets(metin, sizeof(metin), stdin);

    // Metindeki her bir karakterin say�s�n� say
    for (int i = 0; metin[i] != '\0'; i++) {
        if (metin[i] != '\n') // Sat�r sonu karakterini sayma
            karakterSayisi[(int)metin[i]]++;
    }

    // En fazla tekrarlanan karakteri bul
    for (int i = 0; i < 256; i++) {
        if (karakterSayisi[i] > maxTekrar) {
            maxTekrar = karakterSayisi[i];
            enCokTekrarlananKarakter = (char)i;
        }
    }

    printf("En fazla tekrarlanan karakter: %c\n", enCokTekrarlananKarakter);
    printf("Tekrar say�s�: %d\n", maxTekrar);

    return 0;
}

