#include <stdio.h>
#include <stdlib.h>
int findsmlMiss(int arr[], int n){
int i, temp;
for(i=0;i<n;i++){
    while(arr[i]>=0 && arr[i]<n && arr[arr[i]] != arr[i]){
        temp = arr[i];
        arr[i]=arr[temp];
        arr[temp]=temp;
    }
}
for(i=0;i<n;i++){
    if(arr[i]!=i)
        return i;
}
  return n;
}

int main()
{
     int arr[]={0,1,2,3,4,5,6,7};
     int n=sizeof(arr)/sizeof(arr[0]);
     int miss= findsmlMiss(arr, n);
     printf("The missing smalllest element is:%d", miss);

//    int arr1[2][2], arr2[2][2];
//    printf("enter arr1 elements:\n");
//    for(int i=0;i<2;i++){
//        for(int j=0;j<2;j++){
//            printf("element-[%d],[%d]= ", i,j );
//            scanf("%d", &arr1[i][j]);
//        }
//        puts("");
//    }
//
//      printf("enter arr2 elements:\n");
//    for(int i=0;i<2;i++){
//        for(int j=0;j<2;j++){
//            printf("element-[%d],[%d]= ", i,j );
//            scanf("%d", &arr2[i][j]);
//        }
//        puts("");
//    } printf("The first matrix is:\n");
//     for(int i=0;i<2;i++){
//        for(int j=0;j<2;j++){
//
//            printf("%d ", arr1[i][j]);
//        }
//        puts("");
//    }
//    printf("The second matrix is:\n");
//     for(int i=0;i<2;i++){
//        for(int j=0;j<2;j++){
//
//            printf("%d ", arr2[i][j]);
//        }
//        puts("");
//    }
//    int esitMi=1;
//    printf("\nThe two matrixes can be compared\n");
//    for(int i=0;i<2;i++){
//        for(int j=0;j<2;j++){
//                if(arr1[i][j]!=arr2[i][j]){
//                    esitMi=0;
//                    break;
//                }
//        }
//        if(esitMi==0){
//                    break;
//                }
//        }
//        if(esitMi==1){
//            printf("Two matrixes are equal.");
//        }
//         else{
//            printf("Two matrixes are not equal.");
//        }
}
