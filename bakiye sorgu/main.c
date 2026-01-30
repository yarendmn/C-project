#include <stdio.h>
#include <stdlib.h>

int main()
{
    int islem, tutar ;
    int bakiye = 30000 ;
        printf("Islemler:\n 1:para cekme\n 2:para yatýrma\n 3:havale yapma\n 4:Bakiye sorgu\n 5:kart iade\n\n\n") ;
        printf("Islem seciniz");
        scanf("%d", &islem) ;


    switch(islem) {
    case 1 :
       printf("Bakiyeniz: %d \n", bakiye);
       printf(" cekilecek tutarı giriniz") ;
       scanf("%d" , &tutar);
        if( bakiye < tutar) {
            printf(" yetersiz bakiye") ;
        }
        bakiye -= tutar ;
         printf(" bakiyeniz: %d" , bakiye);
         break;
    case 2 :
        printf("Bakiyeniz: %d \n", bakiye);
       printf(" yatýrýlacak tutarı giriniz") ;
       scanf("%d" , &tutar);
        bakiye += tutar ;
         printf(" bakiyeniz: %d" , bakiye);
         break;
    case 3 :
       printf("Bakiyeniz: %d \n", bakiye);
       printf(" havale yapýlacak tutarý giriniz") ;
       scanf("%d" , &tutar);
        if( bakiye < tutar) {
            printf(" yetersiz bakiye") ;
        }
        bakiye -= tutar ;
         printf(" bakiyeniz: %d" , bakiye);
         break;
    case 4 :
        printf(" Bakiyeniz= %d\n" , bakiye) ;
        break;
    case 5 :
        printf(" Kartinizi aliniz\n") ;
        break;
    default:
        printf(" bilinmeyen islem") ;
        break;
        }
    }
