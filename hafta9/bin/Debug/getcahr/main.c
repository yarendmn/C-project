#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void birlikCevir(int);
void onlukCevir(int);
int main()
{ int num=0, d1, d2, d3, d4;
    while(num!=-1){
        printf("\nenter four digit number:");
        scanf("%d", &num);
        if(num==-1) break;
        d1=num%10;
        d2=(num%100)/10;
        d3=(num%1000)/100;
        d4=num/1000;
        if(d4!=1) birlikCevir(d4);
        printf(" Bin ");
        if(d3!=1) birlikCevir(d3);
        if(d3!=0) printf(" Yuz ");
        if(d2!=0) onlukCevir(d2 );
        if(d1!=0) birlikCevir(d1);
           }
}
void birlikCevir(int number){
    switch(number){
      case 1:printf("Bir"); break;
      case 2:printf("Iki"); break;
      case 3:printf("Uc"); break;
      case 4:printf("Dort"); break;
      case 5:printf("Bes"); break;
      case 6:printf("Altý"); break;
      case 7:printf("Yedi"); break;
      case 8:printf("Sekiz"); break;
      case 9:printf("Dokuz"); break;
    }
}
void onlukCevir(int number){
    switch(number){
      case 1:printf("On"); break;
      case 2:printf("Yirmi"); break;
      case 3:printf("Otuz"); break;
      case 4:printf("Kýrk"); break;
      case 5:printf("Elli"); break;
      case 6:printf("Altmýþ"); break;
      case 7:printf("Yetmis"); break;
      case 8:printf("Seksen"); break;
      case 9:printf("Doksan"); break;
    } }





//}  char myKey;
//    printf("Bir tusa basiniz:");
//    myKey= getchar();
//    printf("%c tusuna bastiniz\n", myKey) ;
//    printf("tusun ascii kodu :%d", myKey) ;
//    printf("\n");
//    for(int i=65;i<=85;i++){
//    putchar(i );
//    }
//    return 0;
