#include<stdio.h>
#include<stdlib.h>

int main(){
    int m=10, n, o *z;

    z = &m;
    *z = m;

    printf("value of z: %d and adress is: %p", z, *z );
    printf("value of m : %d and adress is: %p", m, &m );
    printf("adress is n: %p", &n);
    printf("adress is o: %p", &o)

}
