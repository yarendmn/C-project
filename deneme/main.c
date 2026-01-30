#include <stdio.h>
#include <stdlib.h>

  void myFunc(){
      static int cagsay=0;
      cagsay++;

      printf(" fonk %d kez cagirildi.\n", cagsay);

  }
  int main() {
      int cagsay;
      printf(" kac kez cagirmak istion");
      scanf("%d", &cagsay);
       for( int i=1; i<=cagsay; i++){
        myFunc();
       }
      }
