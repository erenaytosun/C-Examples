
#include <stdio.h>
#include <stdlib.h>



typedef struct list{
    int veri;
    struct list *ileri;
} liste;
liste *bas=NULL,*gecici,*yeni;


void fibEkle(int x){
    yeni=(liste*)malloc(sizeof(liste));
    yeni->veri=0;
    yeni->ileri=NULL;
    bas=yeni;
    gecici=bas;
    yeni=(liste*)malloc(sizeof(liste));
    yeni->ileri=NULL;
    yeni->veri=1;
    bas->ileri=yeni;
    for(int i=0;i<x-2;i++){
        yeni=(liste*)malloc(sizeof(liste));
        yeni->veri=gecici->veri+gecici->ileri->veri;
        yeni->ileri=NULL;
        gecici=gecici->ileri;
        gecici->ileri=yeni;

    }

}
void yazdir(){

    gecici=bas;
    while(gecici!=NULL){
        printf("ana: %d\n",gecici->veri);
        gecici=gecici->ileri;
    }

}


int main()
{
    fibEkle(10);
    yazdir();

    return 0;
}
