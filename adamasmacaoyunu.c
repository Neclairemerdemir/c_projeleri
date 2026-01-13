#include <stdio.h>
#include <string.h>  
#include <ctype.h>   

int main() {
    char gizliKelime[25]; 
    char gorunenKelime[25]; 
    int uzunluk,i,hak = 8;
    char tahmin,tema;
    int harfBulunduMu ,bilinenHarfSayisi = 0;      
    
    printf("Adam asmaca oyunumuza hosgeldiniz ! \n Kelimeyi bulmak için 8 hakkiniz var hakkinizi idareli kullanýn !!! \n Tahmin edilmesi istenen kelimeyi yaziniz. DIKKATLII OLL KIMSE GORMESIINN!! :)   : ");
    scanf("%s", gizliKelime);

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); 
    printf("yazdiðiniz kelime hangi tema ile ilgili yazýnýz:\n");
    scanf(" %s",& tema);

    uzunluk = strlen(gizliKelime);

    
    for (i = 0; i < uzunluk; i++) {
      
        gorunenKelime[i] = '_'; 
    }
    gorunenKelime[uzunluk] = '\0';   // son vermek için yazdým.

    printf("Oyun baþlýyor. Kelime %d harfli... BAÞARILAR :)\n", uzunluk);

    
    while (hak > 0 && bilinenHarfSayisi < uzunluk) {
        
        printf("\nKelime: ");
        for(i=0; i < uzunluk; i++) {
            printf("%c ", gorunenKelime[i]);
        }
        printf("\t   |        Kalan Hak: %d\n", hak);

        printf("\n Harf tahmininde bulunun: ");
        scanf(" %c", &tahmin);

        harfBulunduMu = 0; 

        
        for (i = 0; i < uzunluk; i++) {
          
            if (gizliKelime[i] == tahmin) {
                if (gorunenKelime[i] == '_') {
                    gorunenKelime[i] = tahmin; 
                    bilinenHarfSayisi++;
                }
                harfBulunduMu = 1; 
            }
        }

        if (harfBulunduMu) {
            printf(">> Dogru tahmin!\n");
        } else {
            printf(">> Yanlis tahmin! Bir hakkin gitti.\n");
            hak--;
        }
    }

    
    printf("\n----------------------------\n");
    if (bilinenHarfSayisi == uzunluk) {
        printf("TEBRIKLER! Kelimeyi buldun: %s\n", gizliKelime);
    } else {
        printf("KAYBETTIN! Adam asildi... Kelimemiz: %s\n", gizliKelime);
    }

    return 0;
}
