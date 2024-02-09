#include <stdio.h>
#include <stdlib.h>

#define MAX_KARGO_SAYISI 100

// Kargo yapýsý
typedef struct {
    int kargoNo;
    char durum[50];
} Kargo;

int main() {
    Kargo *kargoListesi[MAX_KARGO_SAYISI] = {NULL}; // Kargo numaralarý için iþaretçi dizisi
    int kargoSayisi = 0;

    // Kullanýcýdan kargo numaralarýný al
    printf("Kargo takibi yapmak icin kargo numaralarini girin (sonlandýrmak ýcýn -1):\n");
    int kargoNo;
    while (1) {
        printf("Kargo No: ");
        scanf("%d", &kargoNo);
        if (kargoNo == -1)
            break;

        // bellekte yer aç
        kargoListesi[kargoSayisi] = (Kargo *)malloc(sizeof(Kargo));
        if (kargoListesi[kargoSayisi] == NULL) {
            printf("Bellek yetersiz!\n");
            return 1;
        }

        // Kargo numarasýný ve durumu kaydet
        kargoListesi[kargoSayisi]->kargoNo = kargoNo;
        printf("Kargo Durumu: ");
        scanf("%s", kargoListesi[kargoSayisi]->durum);

        kargoSayisi++;
    }

    // Kargo bilgilerini ekrana yazdýr
    printf("\nKargo Takibi:\n");
    for (int i = 0; i < kargoSayisi; i++) {
        printf("Kargo No: %d, Durum: %s\n", kargoListesi[i]->kargoNo, kargoListesi[i]->durum);
    //bellekte yer aç
        free(kargoListesi[i]);
    }

    return 0;
}

