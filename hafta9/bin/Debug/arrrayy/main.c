#include <stdio.h>
#include <stdlib.h>
int main(){
    char isim[]= "ahmet";
    printf("dizi boyutu %d", sizeof(isim)/sizeof(char));

//    int arr[101],n,i,pos,key;
//
//     printf("kac eleman var?");
//     scanf("%d", &n);
//
//     printf("diziyi sıralı gir:");
//     for(i=0;i<n;i++){
//        scanf("%d",&arr[i]);
//     }
//   printf("eklenecek sayı:");
//   scanf("%d", &key);
//
//
//     for(i=0;i<n;i++){
//        if(key<arr[i]){
//            pos=i;
//            break;
//        }
//
//
//     }
//     if(i==n)
//        pos=n;
//
// printf("eklenecek sayının position is %d\n", pos);
//     for(i=n;i>pos;i--){
//        arr[i]=arr[i-1];
//     }
//   arr[pos]= key;
//
//   printf("Yeni dizi:\n");
//   for(i=0;i<n+1;i++){
//    printf("%d ",arr[i]);
//   }










   }

//int main(){
//    int n,i, position ;
//    printf("dizi boyutunu gir: ");
//    scanf("%d", &n);
//  int arr[n];
//
//printf("elemanları girin:");
//   for( i=0;i<n;i++){
//    scanf("%d",&arr[i]);
//}  printf("dizi:");
//  for( i=0;i<n;i++){
//    printf("%d",arr[i]);
//
//}
//if(position<1||position>n)
// printf("nerdeki elemanı silmek istersin? (1 ile %d arası olsun)", n);
// scanf("%d", &position);
//
//   for(i=position-1;i<n-1;i++){
//    arr[i]=arr[i+1];
//   }
//   n--;
//   printf("yeni dizi");
//    for( i=0;i<n;i++){
//    printf("%d",&arr[i]);
//  } }
////void findPosition(int arr[],int size , int target){
//  printf("position of %d is :", target);
//  int found=0;
//    for(int i=0;i<size;i++){
//
//                if(arr[i]==target){
//
//            printf("%d ",i);
//            found=1;
//                }
//                 }
//             if(found==0){
//                printf("bende bundan yok kanka");
//             }
//
//
//}
//int main() {
//    int arr[]= {4,5,6,7,8,9,1,7,7};
//    int target=10;
//    int size=sizeof(arr)/sizeof(arr[0]);
//    findPosition(arr,size,target);
//return 0;
//}
//  unsigned int zarSonucu, sayac
//  unsigned int sonuc[6]={0};
//  srand(time(NULL));
//  for(sayac=0;sayac<6000;sayac++){
//    zarSonucu=rand() % 6;
//    sonuc[zarSonucu]++;
//  }
//  printf("simdiki zar:%d\n",zarSonucu);
//  printf("zar\tatilmamiktari\n");
//    size_t i=0;
//   for(; i<6;i++){
//   printf("%zu\t%u\n", i+1,sonuc[i]);   }

//      int n,evens=0,odds=0;
//      printf("enter elements numbers: ");
//      scanf("%d", &n);
//      int array[n];
//      printf("input %d elements in array: ", n);
//      for(int i=0;i<n;i++){
//        printf("elements %d: ", i+1);
//        scanf("%d",&array[i]);
//        }
//int evenarr[evens];
// int oddarr[odds];
//     for(int i=0;i<n;i++){
//        if(array[i]%2==0){
//          evenarr[evens]=array[i];
//          evens++;
//        }
//        else{
//            oddarr[odds]= array[i];
//          odds++;
//        }
//     }
//      printf("even elements:");
//       for(int i=0; i<evens;i++){
//
//        printf("%d", evenarr[evens]);
//       }
//       printf("odds elemets:");
//         for(int i=0; i<odds;i++){
//        printf("%d", oddarr[odds]);
//       }
//      for(int i = 0; i < n ; i++){
//        for(int j = i+1 ; j < n ; j++) {
//            if(array[i] == array[j]){
//                count++;
//                } }
//    for(int i=0;i<n;i++){
//        printf(" %d ", array[i]);
//    }
//     }
//        printf("numbers of duplicate numbers: %d",count);
//        free(array);

//    int n, sum=0;
//    int array[n],reservearray[n];
//    printf("enter  array element number: ");
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        printf("%d. numberi giriniz: ", i+1);
//        scanf("%d", &array[i]);
//    }
//    for(int i=0;i<n;i++){
//        reservearray[i]= array[i];
//    }
//
//    for(int i=0;i<n;i++){
//        printf(" %d ", array[i]);
//    }
//       printf("\n");
//    for(int i=n-1;i>=0;i--){
//        printf(" %d ", reservearray[i]);
//    }
////    printf("\n");
// for(int i=n-1;i>=0;i--){
//        printf("%d ", array[i]);
//    }

//    double myValue, myArray[10];
//     int choice, index;
//     do{
//        printf("Make a choice(-1 to exit):\n");
//        printf(" 1. Write to array\n");
//        printf(" 2. Read from array\n");
//        scanf("%d", &choice);
//        if(choice==-1) { break;}
//        if(choice!=1&&choice!=2) {
//        printf("malsin\n");
//        continue;
//        }
//        printf("enter an array index:");
//        scanf("%d", &index);
//        if(index<0&&index>9) {
//            printf("array bu aralýklarda degil cnm");
//            continue;
//        }
//        switch(choice){
//        case 1:printf("enter an value:");
//               scanf("%lf",&myValue);
//               myArray[index]=myValue;
//               printf("yazdik oldu\n");
//               break;
//        case 2:printf("myArray[%d]=%.2lf\n", index, myArray[index]);
//         break;
//          }
//
//        }while(choice!=-1);
//


//{   int sum=0;
//    float average;
//    int marks[5]={80,90,60,70,50} ;
//    for(int i=0;i<5;i++){
//         sum += marks[i];
//        printf("%d\n", sum);
//    }
//
//    average = sum/5;
//    printf("average=%f", average);

