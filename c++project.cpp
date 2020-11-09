#include <stdio.h>

#include <stdlib.h>

char kare[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };   // Tahtanin sayilari tanýmlandi.

int program();
void sekil();

int main()
{
    int oyuncu = 1, i, secim;      // variable tanimalamalari yapildi.
    char yer;                           //Tahta'nin üzerinde ki fonksiyonlar tanimlandi.
    do
    {
        sekil(); // sekili cagirdik.
        oyuncu = (oyuncu % 2) ? 1 : 2; //Hangi oyuncu daha önce baslayacak. 1. Daha önce ayarlandi. (( Iki oyuncu arasinda oyuncular 1 veya 2) ( %isareti 2 oyuncu arasinda : isareti 1 veya 2 gibi)

        printf(" %d. Oyuncu, Sayi Giriniz.:  ", oyuncu);
        scanf("%d", &secim);

        yer = (oyuncu == 1)  ?'X' : 'O';   // 1. Oyuncu X'lemi baslasin O'la mý? Tanýmladik.   X'e ayarlandi.

        if (secim == 1 && kare[1] == '1')                  // 1.Kareyi tanimladik, Girilen sayi 1'se   1'e gitsin.
            kare[1] = yer;                                 // Do fonksiyonu icinde komutlari girdik. While gibi degildir. Illa bir kere calisir.
            
        else if (secim == 2 && kare[2] == '2')
            kare[2] = yer;
            
        else if (secim == 3 && kare[3] == '3')
            kare[3] = yer;                                              
            
        else if (secim == 4 && kare[4] == '4')
            kare[4] = yer;
            
        else if (secim == 5 && kare[5] == '5')
            kare[5] = yer;
            
        else if (secim == 6 && kare[6] == '6')
            kare[6] = yer;
            
        else if (secim == 7 && kare[7] == '7')
            kare[7] = yer;
            
        else if (secim == 8 && kare[8] == '8')
            kare[8] = yer;
            
        else if (secim == 9 && kare[9] == '9')
            kare[9] = yer;
            
        else                                        //Ayni Yere Yazilan Sayilar Gecersiz Olarak Kabul Edildi.
        {
            printf("Gecersiz Hamle ");

            oyuncu--;      // Gecersiz Hamleden sonra bir geri gelmesi saglandi. Devam ederse oyun bozulur.
        
        }
        i = program();   //Main fonksiyonun icine program bölümünü ekledik.

        oyuncu++;           //sirayla oyuncu sayisi gelmesi icin ekledik.
    }
	
	while (i ==  - 1);       // Oyun devam ediyor       Program döngüsünde -1 olmasi aciklandi.              
                              //While Fonksiyonu icinde kosullari girdik  (Kontrol Edip Öyle Calisir.)
    sekil(); // sekili cagirdik.
    
    if (i == 1)   // i=1 olmasi durumunda kazanan belli olur.(Program bölümünde niye 1 oldugu aciklandi.)
        printf("*** %d. Oyuncu Kazandi *** \n     *Iyi Oyundu* ", --oyuncu);
		           //Oyun Sonuclandi
 
	
	else
    
        printf("*** Oyun Berabere ***");

    

    return 0;         //Berabere olma durumu (Program bölümünde anlatildi.)
}
//	Main Fonk bitisi
int program()

{
    if (kare[1] == kare[2] && kare[2] == kare[3])             //         Kazanma Kodu Baslangic
        return 1;
        
    else if (kare[4] == kare[5] && kare[5] == kare[6])        //
        return 1;
        
    else if (kare[7] == kare[8] && kare[8] == kare[9])        //
        return 1;
                                                              //   Bu bölümde kazanmak icin gerekli hamleleri olusturduk.  3'ü birlikte x veya o olursa kazanan ortaya cikar.
    else if (kare[1] == kare[4] && kare[4] == kare[7])
        return 1;
        
    else if (kare[2] == kare[5] && kare[5] == kare[8])        //
        return 1;
        
    else if (kare[3] == kare[6] && kare[6] == kare[9])        //
        return 1;
        
    else if (kare[1] == kare[5] && kare[5] == kare[9])        //
        return 1;
        
    else if (kare[3] == kare[5] && kare[5] == kare[7])        // K. K.   Bitis
        return 1;
        
    else if (kare[1] != '1' && kare[2] != '2' && kare[3] != '3' &&              //Berabere olma durumlari 106'dan 109. satira kadar.
        kare[4] != '4' && kare[5] != '5' && kare[6] != '6' && kare[7] 
        != '7' && kare[8] != '8' && kare[9] != '9')

        return 0;
    else                       //Oyun devam etsin.
        return  - 1;
}

void sekil()
{
    system("cls" );  //Ekrani temizler
    printf("   Huseyin and Tolga's Game\n\n");

    printf(" 1. Oyuncu (X)  - 2. Oyuncu(O)\n\n\n");
                                                                                    // Oyun TAHTASI

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", kare[1], kare[2], kare[3]);                   // Gerekli Tanimlamalari Yaptik.

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", kare[4], kare[5], kare[6]);           

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", kare[7], kare[8], kare[9]);

    printf("     |     |     \n\n");
  
}


