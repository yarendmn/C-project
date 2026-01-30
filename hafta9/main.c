#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//    int decimalToBinary(unsigned int n) {
//    if(n>1) {
//    decimalToBinary(n/2);
//    }
//     printf("%u", n%2);
//     }
//
//int main()
//{    unsigned int sayi;
//     printf(" enter  decimal number");
//     scanf("%u", &sayi) ;
//
//    printf(" binary karsiligi :") ;
//    decimalToBinary(sayi) ;
//    return 0;
//    void amstrongNum( int sayi) {
//     int orjinalSayi = sayi ;
//     int digit1 = sayi%10;
//     sayi= sayi/10 ;
//     int digit2 = sayi%10;
//     sayi= sayi/10;
//     int digit3 = sayi%10;
//      int sum =  pow( digit1 , 3 ) + pow( digit2 , 3)  + pow (digit3 , 3) ;
//       if(sum== orjinalSayi) {
//        printf( " %d amstrong sayidir", orjinalSayi) ;       }
//
//
//       else {
//        printf(" %d amstrong sayisi degildir", orjinalSayi);
//       }
//    }
//    int perfectMi( int sayi){
//        int sumOfDivisors =1;
//      for( int i=2;i<sayi; i++) {
//        if( sayi%i==0){
//           sumOfDivisors += i ;
//   }
//   }
//   return ( sumOfDivisors == sayi) ;
//      }
//  int main(){
//    int num;
//    amstrongNum(150);
//    printf(" enter a positive number");
//    scanf("%d", &num) ;
//     if(perfectMi(num)){
//        printf("%d perfect numberdýr", num);
//     }
//     else{
//        printf("%d perfect number degil", num) ;
//     }
//
//    }
//    int amstrongNum(int sayi) {
//    int orjinalSayi= sayi;
//    int sum=0 ;
//    int basamak;
//       while(sayi>0){
//        basamak = sayi% 10;
//        sum += basamak* basamak* basamak;
//        sayi = sayi/10;
//       }
//     if( sum== orjinalSayi){
//        return 1;
//     }
//     else{
//        return 0;
//     }
//
//
//    }
//    int main() {
//    int num;
//    printf("enter a number");
//    scanf("%d", &num) ;
//      if(amstrongNum(num)==1) {
//        printf("%d amstrong number", num) ;
//      }
//      else  {
//        printf("%d amstrong number degil", num) ;
//      }
//      return 0;
//    }
     int sayilariTopla( int sayi1, int sayi2){
     int sum = sayi1 + sayi2;
     return sum ;
     }
     int main (){
     int a , b;
     printf("enter two numbers");
     scanf("%d %d", &a ,&b);
     printf(" sum is %d", sayilariTopla(a,b) ) ;
     }
