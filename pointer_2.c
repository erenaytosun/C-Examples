#include <stdio.h>
#include <stdlib.h>

void HarfDonustur(char *ptr){

    int i=0;
    while(ptr[i]!=NULL){

        if(isupper(ptr[i])!=0){

            ptr[i]=tolower(ptr[i]);
        }
        else{
            ptr[i]=toupper(ptr[i]);
        }

        i++;
    }

}
void TersKopyala(char *ptr, char *ptr2){

    int i=0;
    while(ptr[i]!=NULL){

        i++;
    }

    int j=0;
    while(ptr[j]!=NULL){

        ptr2[i-1]=ptr[j];
        j++;
        i--;
    }


}






int main()
{
    char isim[20];
    printf("Lutfen bir string ifade giriniz...\n"); scanf("%s",&isim);
    printf("%s\n\n",isim);

    HarfDonustur(isim);
    printf("%s\n",isim);

    char isim2[20];
    TersKopyala(isim,isim2);
    printf("%s\n",isim2);


    return 0;
}
