#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int veri;
    struct list *ileri;
    struct list *geri;

}liste;

 liste *bas=NULL,*gecici,*yeni;

void basaEkle(int x){

    yeni=(liste*)malloc(sizeof(liste));
    yeni->veri=x;
    if(bas==NULL){
        bas=yeni;
        yeni->ileri=NULL;
        yeni->geri=NULL;
    }
    else{
        bas->geri=yeni;
        yeni->ileri=bas;
        yeni->geri=NULL;
        bas=yeni;

    }

}

void yazdir(){

    gecici=bas;
    while(gecici!=NULL){
        if(gecici->geri==NULL){
            printf("suan: %d  onceki:NULL\n",gecici->veri);
        }
        else{
            printf("suan: %d  onceki: %d\n",gecici->veri,gecici->geri->veri);


        }
        gecici=gecici->ileri;
    }




}







int main()
{
    basaEkle(15);
    basaEkle(12);
    basaEkle(68);
    basaEkle(2);
    basaEkle(156);
    yazdir();


    return 0;
}
