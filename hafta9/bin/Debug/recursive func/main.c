#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// unsigned long long int factorial(unsigned int number);
//int main()
//
//{
// int guessNum, num;
//   srand(time(NULL));
//   printf("Sayi tahmin appi\n");
//   guessNum=rand()%100+1;
// while(1){
//   printf("100 ile 0 arasi bir sayi giriniz:\n ");
//   scanf("%d", &num);
//        if(num<0){
//            printf("MAL");
//            break;
//        }
//     else if(num < guessNum){
//        printf("daha buyuk gir sik kirigi\n");
//    }
//     else if(num > guessNum){
//        printf("daha kucuk gir amsalak\n");
//    }
//    else {
//            printf("afferin gerizekali\n");
//    break;
//    }
//
// }


int main() {
    int n1, n2;
    int sum =0;
    double bolme =0;
    char op;
      printf("yapilacak iþlemi secin: \n");
      scanf(" %c",&op);
    printf("enter two ints:");
    scanf("%d%d",&n1,&n2) ;
    switch(op){
  case '+':
      sum = n1+ n2;
      printf("%d + %d = %d",n1, n2,sum);

      break;
  case '-':
    int cikarma = n1-n2;
      printf("%d - %d = %d",n1, n2,cikarma);

      break;
 case '*':
    int carpma = n1 * n2;
      printf("%d * %d = %d",n1, n2,carpma);

      break;

 case '/':
     if(n2==0) {
     printf("payda sýfýr olamaz");
        break;}
      bolme = (double)n1/ n2;
      printf("%d / %d = %.2lf",n1, n2,bolme);

      break;


 default:
    printf("lütfen gecerli bir operatör giriniz\n");
    break;
} }





