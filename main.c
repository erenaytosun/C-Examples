#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim=0;
    while(secim!=1){

        printf("1-Oyuna Basla <1>\n2-Oyunu Bitir <-1>\n Secim Gir : ");
        scanf("%d",&secim);
        if(secim==1){
            secim=0;
            fonksiyon();
        }
        else if(secim==-1){
            break;
        }
        else{
            printf("Yanlis deger girdiniz..Lutfen dogru secim yapiniz..\n");
        }
    }



    return 0;
}
void fonksiyon(){

    int sayi=10;
    int tahmin=0;

    while(tahmin!=sayi){
        printf("Tahmininizi giriniz : "); scanf("%d",&tahmin);
        if(tahmin==sayi){
            printf("Tebrikler Bildiniz..\n");
        }
        else if(tahmin<sayi){
            printf("Daha buyuk bir sayi giriniz..\n");
        }
        else{
            printf("Daha kucuk bir sayi giriniz..\n");
        }
    }


}
