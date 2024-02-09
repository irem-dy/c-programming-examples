#include <stdio.h>
#include <stdlib.h>

#define MAX_KARGO_SAYISI 100

// Kargo yap�s�
typedef struct {
    int kargoNo;
    char durum[50];
} Kargo;

int main() {
    Kargo *kargoListesi[MAX_KARGO_SAYISI] = {NULL}; // Kargo numaralar� i�in i�aret�i dizisi
    int kargoSayisi = 0;

    // Kullan�c�dan kargo numaralar�n� al
    printf("Kargo takibi yapmak icin kargo numaralarini girin (sonland�rmak �c�n -1):\n");
    int kargoNo;
    while (1) {
        printf("Kargo No: ");
        scanf("%d", &kargoNo);
        if (kargoNo == -1)
            break;

        // bellekte yer a�
        kargoListesi[kargoSayisi] = (Kargo *)malloc(sizeof(Kargo));
        if (kargoListesi[kargoSayisi] == NULL) {
            printf("Bellek yetersiz!\n");
            return 1;
        }

        // Kargo numaras�n� ve durumu kaydet
        kargoListesi[kargoSayisi]->kargoNo = kargoNo;
        printf("Kargo Durumu: ");
        scanf("%s", kargoListesi[kargoSayisi]->durum);

        kargoSayisi++;
    }

    // Kargo bilgilerini ekrana yazd�r
    printf("\nKargo Takibi:\n");
    for (int i = 0; i < kargoSayisi; i++) {
        printf("Kargo No: %d, Durum: %s\n", kargoListesi[i]->kargoNo, kargoListesi[i]->durum);
    //bellekte yer a�
        free(kargoListesi[i]);
    }

    return 0;
}

