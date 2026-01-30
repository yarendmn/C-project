#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGHT 50
#define FILE_NAME "users.txt"

// kullanici yapisi
typedef struct {
    int id;
    char name[50];
    int age;
} User;
int totalUserCount=0;// global değişken
// fonksiyonlar
 void printUser(const User *list){ // const pointer

 }
 // fonksiyon prototipleri
 void kullanicilariListele(const User *liste);
 void kullaniciEkle(User **liste);
 void dosyayaKaydet(const User *liste);
 void dosyadanOku(User **liste);
   int main(){
    volatile int programRunning =1;
    User *userlist = NULL;
    int choice;
extern int i;
int choice;

dosyadanOku(&userlist);
while(programRunning) {    
printf("Lutfenn yapmak istediginiz islemin numarasini giriniz: ");
scanf("%d". &choice);

    switch(choice){
        case 0:
        programRunning=0;
        printf("Cikis yapiliyor...\n");
        break;
        case 1:
        printf("Kullanici Ekle\n");
        kullaniciEkle(&userlist);
        break;
        case 2:
        printf("Kullanici Listele\n");
        kullanicilariListele(userlist);
        break;
        case 3:
        printf("Dosyaya kaydet\n");
        dosyayaKaydet(&userlist);
        break;
        case 4:
        printf("Dosyadan Oku\n");

        break;
        default:
        printf("Gecersiz islem");
        break;
    }
}
free(userslist);
printf("bellek temizlendi, program kapatiliyor.\n");
return 0;


    }

 void kullanicilariListele(User liste[]){
    register int i;
    if(totalUserCount ==0){
        printf("Henuz kimse eklenmemis!\n");
        return;
    }
    printf("\n--- Kayitli Kullanicilar ---\n");
    for(i=0; i< totalUserCount ; i++){
        printf("%d. Kullanici --> ID: %d, Isim: %s, Yas: %d\n", i+1, liste[i].id, liste[i].name, liste[i].age) ;
    }
 }
void kullaniciEkle(User *liste){
    static int sessionUserAdded=0;
    User *temp= NULL;

     if(*liste == NULL) {
        temp = (User *)malloc(sizeof(User));
        if (temp == NULL) {
            perror("Malloc hatasi");
            return;
        }
     }
     else {
        temp = (User *)realloc(*liste, sizeof(User)* (totalUserCount+1));
        if(temp== NULL){
            perror("Realloc hatasi");
            return;
        }
     }
     *liste = temp;
    printf("\n--- Yeni Kullanici Ekle ---\n");

    printf("ID giriniz: ");
    scanf("%d", &(*liste)[totalUserCount].id);

    printf("Isim giriniz: ");
    scanf("%d", &(*liste)[totalUserCount].name);

    printf("Yas giriniz: ");
    scanf("%d", &(*liste)[totalUserCount].age);
    
    totalUserCount++;
    sessionUserAdded++;
    printf("Kullanici bellege eklendi.");
    printf("Bu oturumda toplam %d kisi eklediniz.\n", sessionUserAdded);
 }
 void dosyayaKaydet(User liste[]){
        FILE *dosya;
        User yenikullanici = {1, "Yaren", 18};
       dosya = fopen("FILE_NAME", "a"); //sonuna ekleme için append modu
       if(dosya == NULL){
        printf("Dosya acilamdi");
        exit(-1);
       }
     fprintf(dosya, "%d %s %d\n", yenikullanici.id, yenikullanici.name, yenikullanici.age);
     fclose(dosya);
     printf("Kullanici kaydedildi");
 }
 void dosyadanOku(User *liste){
      FILE *dosya;
        int id, age;
        char name[50];

        dosya= fopen("FILE_NAME", "r");
         if(dosya==NULL){
            perror("Hata");
            exit(0);
         }
         while(fscanf(dosya, "%d %s %d", &id, name, &age ) != EOF);{
            printf("ID: %d, Isim: %s, Yas: %d\n", id, name, age);
         }
           fclose(dosya);
 }