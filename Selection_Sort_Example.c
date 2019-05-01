#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut;
    printf("Dizi kac elemanli olsun : ");
    scanf("%d",&boyut);
    int dizi[boyut];
    for(int i=0; i<boyut; i++){
        scanf("%d",&dizi[i]);

    }
    printf("Algoritmadan once :    ");
    for(int i=0; i<boyut; i++){
        printf("%d  ",dizi[i]);

    }
    my_function(dizi,boyut);
    return 0;
}

void my_function(int dizi[],int boyut){

    int min;
    int temp;
    int az;

    for(int i=0;i<boyut-1;i++){

        min=i;
        az=dizi[i];
        for(int j=i;j<boyut;j++){
            if(dizi[j]<az){
                az=dizi[j];
                min=j;
            }
        }
        temp=dizi[i];
        dizi[i]=dizi[min];
        dizi[min]=temp;


    }
    printf("Algoritmadan sonra :    ");
    for(int k=0; k<boyut; k++){
        printf("%d  ",dizi[k]);

    }

}
