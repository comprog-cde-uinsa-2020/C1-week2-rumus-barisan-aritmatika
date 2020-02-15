#include <stdio.h>
int main (){
    printf("RUMUS BARISAN BILANGAN ARITMATIKA\n");
    int Un,a,b,n; //variabel

    printf("masukan angka pertama       : \n");
    scanf("%i", &a);

    printf("masukan beda angka          : \n");
    scanf("%i", &b);

    printf("masukan banyak angka ke-n   : \n");
    scanf("%i", &n);

    Un=a+(n-1)*b;
    printf("hasinya adalah: %i\n",Un);
    printf("\n");
}
