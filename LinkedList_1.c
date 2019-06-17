
#include <stdio.h>
#include <stdlib.h>



typedef struct list{

    int veri;
    struct list *ileri;

} liste;
liste *bas=NULL,*yeni,*gecici;



void basaEkle(int x){

    yeni=(liste*)malloc(sizeof(liste));
    yeni->veri=x;
    if(bas==NULL){

        bas=yeni;
        yeni->ileri=NULL;
    }
    else{
        yeni->ileri=bas;
        bas=yeni;
    }

}


void yazdir(){

    gecici=bas;
    while(gecici!=NULL){

        printf("%d\t",gecici->veri);
        gecici=gecici->ileri;

    }





}
int main()
{
    basaEkle(5);
    basaEkle(14);
    basaEkle(-4);
    basaEkle(12);
    yazdir();



    return 0;
}
