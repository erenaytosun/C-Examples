

/// 2 farkli firmada calisan 3 farklý elemanin maaslarini sattiklari ürüne göre hesaplayan program



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char calisan[2][3][15];
    int  maas[2][3];
    int  satis[2][3];
    int primlimaas[2][3];

    for (int i=0;i<2;i++){

        for(int j=0;j<3;j++){

            printf("%d. isyerindeki %d. calisanin ismi: ",i+1,j+1); scanf("%s",&calisan[i][j]);
            printf("%d. isyerindeki %d. calisanin maasi: ",i+1,j+1); scanf("%d",&maas[i][j]);
            printf("%d. isyerindeki %d. calisanin satis sayisi: ",i+1,j+1); scanf("%d",&satis[i][j]);

            if(satis[i][j]>=0 && satis[i][j]<10){

                primlimaas[i][j]=maas[i][j]+maas[i][j]*0.25;
            }
            else if(satis[i][j]>=10 && satis[i][j]<20){

                primlimaas[i][j]=maas[i][j]+maas[i][j]*0.5;
            }
            else{
                primlimaas[i][j]=maas[i][j]*2;
            }

        }
    }
    printf("---------------------------------------------------------------------\n\n");
    for(int k=0;k<2;k++){

        for(int m=0;m<3;m++){

            printf("%d. firmanin %d. elemani %s'nin toplam maasi %d'dir.\n",k+1,m+1,calisan[k][m],primlimaas[k][m]);
        }
    }



    return 0;
}
