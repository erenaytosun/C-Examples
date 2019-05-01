#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int menu(){

    int secim=0;
    while(secim!=1 && secim!=2){

        printf("1-Asal sayi bulma \n2-Sayi carpimi\n3- Cikis \n ");
        scanf("%d",&secim);
        if(secim==1){
            int asal;
            printf("Sayi gir: \n");
            scanf("%d",&asal);
            int yol=asal/2;
            int gelen=asalbul(asal,yol);
            if(gelen==1){
                printf("%d asal sayidir\n",asal);
            }
            else{
                printf("Asal sayi degildir\n");
            }
            return secim;
        }

        else if(secim==2){

            srand(time(NULL));
            int sayi1=1+rand()%20;
            int sayi2=2+rand()%99;
            printf("Sayi 1: %d    Sayi 2: %d\n",sayi1,sayi2);
            int sonuc=carpim(sayi1,sayi2);
            printf("Sonuc : %d\n",sonuc);
            return secim;
        }

        else if(secim==3){
            break;
        }
        else{
            printf("Yanlis deger girdiniz..Lutfen dogru secim yapiniz..\n");
        }
    }

}

int asalbul(int sayi,int yari){

    if(sayi<2){

        return 0;
    }
    if(yari==2){

        return 1;
    }
    if(sayi%yari==0){
        return 0;

    }
    asalbul(sayi,yari-1);

}
int carpim(int ilk,int son){

    if(ilk==0 || son==0){
        return 0;
    }
    return ilk+carpim(ilk,son-1);

}

int main()
{
    int secim=1;
    while(secim==1 || secim==2){
        secim=menu();
    }

    printf("Program sonlandi...");
    return 0;
}
