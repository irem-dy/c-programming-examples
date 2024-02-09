
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ýþçi verilerini tutan yapý tanýmý
struct isci {
    char adi[30];
    char soyadi[30]; // soyadi için boyut belirtilmeli
    int yas;
    double aylikucret;
};

// Ýþçi bilgilerini ekrana yazdýran fonksiyon
void yazdir(struct isci *isci1) {
    strcpy(isci1->adi, "Mehmet");
    strcpy(isci1->soyadi, "Tuncer"); 
    isci1->yas = 35;
    isci1->aylikucret = 12.98765;
    printf("isim: %s\nSoisim:%s\nYas:%d\nAylik Maas:%.2f", isci1->adi, isci1->soyadi, isci1->yas, isci1->aylikucret);
}

int main() {

    struct isci *isci1 = (struct isci *)malloc(sizeof(struct isci));

    printf("Kisinin bilgileri:\n");

    // Ýþçi bilgilerini ekrana yazdýran fonksiyonu çaðýr
    yazdir(isci1);

    
    return 0;
}

        
        



