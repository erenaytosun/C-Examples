#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{


   /// strlen function

    char name[]="Erenay";
    int size=strlen(name);
    printf("%d\n\n",size);

    for(int i=0;i<size;i++){

        printf("%c\n",name[i]);
    }




    /// strcpy function

    char message[10];
    printf("\nWelcome %s \n",strcpy(message,name));





    /// strcat function

    char ex1[]="\nSee you";

    printf("%s\n",strcat(ex1,message));





    /// strcmp function

    char guess[20];
    char result[]="Fenerbahce";

    printf("\nGuess : "); scanf("%s",&guess);

    if(strcmp(result,guess)==0){

        printf("\nChampion Fenerbahce\n");
    }
    else{
        printf("\nWrong Guess\n");
    }





    /// strrev function

    char ex2[]="HELLO";

    printf("\n%s\n",strrev(ex2));





    /// strlwr function

    char ex3[]="Nice TO MEET YOU";

    printf("\n%s\n",strlwr(ex3));




    /// strupr function

    char ex4[]="nice TO Meet you";

    printf("\n%s\n",strupr(ex4));


    return 0;
}
