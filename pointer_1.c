#include <stdio.h>
#include <stdlib.h>

int main()
{


    int number=6;
    printf("%d's address : %p\n",number,&number);

    int *ptr;
    ptr=&number;
    int number2=*ptr;

    printf("%d\n",number);
    printf("%p\n",ptr);
    printf("%d\n",number2);
    printf("%d\n",*ptr);
    printf("%p\n",&ptr);
    printf("%p\n",&number);
    printf("%p\n",&number2);

    printf("---------------------------------------\n");

    /// 4 bytes --->

    int number3=15;
    int *p1=&number3;
    printf("%p\n",p1);
    p1++;
    printf("%p\n",p1);
    p1++;
    printf("%p\n",p1);



    printf("---------------------------------------\n");
    /// Arrays and Pointer

    int array[]={3,8,14,21,34};
    int *arrptr=&array[0];  /// *arrpyr=&dizi[0] <===> *arrptr=dizi

    for(int i=0;i<5;i++){

        printf("%d. number : %d ---- address: %p \n",i+1,*(arrptr+i),(arrptr+i));


    }


    return 0;
}
