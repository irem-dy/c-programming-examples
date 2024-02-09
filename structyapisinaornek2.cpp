#include <stdio.h>

	
struct ders {
    int ders_kod;
    int vize;
    int final;
    double gecmenotu;
};


struct sahis_bilgileri {
    char ad[40];
    char soyad[40];
    int No;
    struct ders dersler[5]; 
};


void ogrenciBilgileriGirVeHesapla(struct sahis_bilgileri *ogrenci) {
    printf("Ad: ");
    scanf("%s", ogrenci->ad);
    
    printf("Soyad: ");
    scanf("%s", ogrenci->soyad);
    
    printf("Ogrenci No: ");
    scanf("%d", &ogrenci->No);
    
    for (int i = 0; i < 5; ++i) {
        printf("Ders %d Kod: ", i + 1);
        scanf("%d", &ogrenci->dersler[i].ders_kod);
        
        printf("Ders %d Vize: ", i + 1);
        scanf("%d", &ogrenci->dersler[i].vize);
        
        printf("Ders %d Final: ", i + 1);
        scanf("%d", &ogrenci->dersler[i].final);

        ogrenci->dersler[i].gecmenotu = 0.4 * ogrenci->dersler[i].vize + 0.6 * ogrenci->dersler[i].final;
    }
}

void ogrenciBilgileriniYazdir(struct sahis_bilgileri ogrenci) {
    printf("\nOgrenci Bilgileri:\n");
    printf("Ad: %s\n", ogrenci.ad);
    printf("Soyad: %s\n", ogrenci.soyad);
    printf("ogrenci No: %d\n", ogrenci.No);

    printf("\nDers Bilgileri:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Ders %d Kod: %d\n", i + 1, ogrenci.dersler[i].ders_kod);
        printf("Ders %d Vize: %d\n", i + 1, ogrenci.dersler[i].vize);
        printf("Ders %d Final: %d\n", i + 1, ogrenci.dersler[i].final);
        printf("Ders %d Gecme Notu: %.2f\n", i + 1, ogrenci.dersler[i].gecmenotu);
    }
}

int main() {
    struct sahis_bilgileri ogrenciler[5];

    
    for (int i = 0; i < 5; ++i) {
        printf("=== %d. ogrenci ===\n", i + 1);
        ogrenciBilgileriGirVeHesapla(&ogrenciler[i]);
        printf("\n");
    }

    for (int i = 0; i < 5; ++i) {
        ogrenciBilgileriniYazdir(ogrenciler[i]);
        printf("\n================\n");
    }

    return 0;
}

