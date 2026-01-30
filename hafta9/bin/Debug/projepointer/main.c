#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  numara, yas;
    char isim[50];
    char soyIsim[50];

     char *pIsim = isim;
     char *psoyIsim = soyIsim;
     int *pNumara = &numara;
     int *pYas = &yas;
       printf("isim giriniz:\n");
       scanf("%s", isim);
       printf(" soy isim giriniz:\n");
       scanf("%s", soyIsim);
       printf("ogrenci no giriniz:");
       scanf("%d", &numara);
       printf("yas giriniz:");
       scanf("%d", &yas);

printf("isim=%s\n ", isim);
printf("isim adresi=0x%lx\n\n", (unsigned long)pIsim);
printf("soy isim=%s\n ", soyIsim);
printf(" soy isim adresi=0x%lx\n\n", (unsigned long)psoyIsim);
printf("numara=%d\n ", numara);
printf("okul numarasý adresi=0x%lx\n\n", (unsigned long)pNumara);
printf("yas=%d\n ", isim);
printf("yas adresi=0x%lx\n\n", (unsigned long)pYas);
printf("pointerileyasdegeri=%d\n", *pYas);

    return 0;
}
