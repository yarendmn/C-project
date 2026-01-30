#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Account {
    int accountNo;
    char owner[50];
    float balance;
};

struct Account *createAccount(struct Account *acc,int *count);
void deposit(struct Account *acc,int count);
void withdraw(struct Account *acc,int count);
void listAccounts(struct Account *acc,int count);
void listmyAccount(struct Account *acc,int count,int accNo);
int main(){
    struct Account *accounts;
    int choice ;

    FILE *file;
    int count=0;
printf("1 - Yeni Hesap Olustur\n2 - Para Yatir\n3 - Para Cek\n4 - Hesap Bilgisi Goruntule\n5 - Tum Hesaplari Listele\n0 - Cikis")};
printf("\nYapmak istediginiz islemi seciniz: ");
scanf("%d",&choice);

while(choice>=0){
    switch(choice){
        case 1:
           accounts=createAccount(accounts,&count);
           break;
        case 2:
           deposit(accounts,count);
           break;
        case 3:
           withdraw(accounts,count);
           break;
        case 4:
           listmyAccount(accounts,count,accNo);
           break;
        case 5:
           listAccounts(accounts,count);
           break;
        case 0:
           printf("Cikis yapilyor...\n");
           exit(0);
        default:
           printf("Gecersiz islem sectiniz, Lütfen gecerli bir islem seciniz.\n");
           break;
    }
 }
FILE *file=fopen("account.dat","w+");

if(file==NULL){
    printf("Dosya acilamadi.");
    return -1;
}

for(int i=0;i<count;i++){
fprintf(file,"%5d  %5s %5f\n",accounts[i].accountNo, accounts[i].owner,accounts[i].balance);
}
fclose(file);

   return 0;
}
struct Account *createAccount(struct Account *acc,int *count){
    if(*count==0){
        acc=(struct Account *acc)malloc(sizeof(struct Account));
    }else{
        acc=(struct Account *acc)realloc(acc,(*count+1)*sizeof(struct Account));
    }
    printf("Hesap Numarasini Giriniz: ");
    scanf("%d",&acc[*count].accountNo);
    printf("Hesap Sahibinin Adini Giriniz: ");
    scanf("%s",acc[*count].owner);
    acc[*count].balance=0.0;
    (*count)++;
 free(acc);
    return acc;
    }
void deposit(struct Account *acc,int count){
    int accNo;
    float amount;
    printf("Para yatirmak istediginiz miktari giriniz: ");
    scanf("%f",&amount);
    printf("Hesap Numarasini Giriniz: ");
    scanf("%d",&accNo);
    for(int i=0;i<count;i++){
        if(acc[i].accountNo==accNo){
            acc[i].balance+=amount;
            printf("Yeni bakiye: %.2f\n", acc[i].balance);
         }
         else{
            printf("Yetersiz bakiye.\n");
         }
        }
     
}
void withdraw(struct Account *acc,int count){
    int accNo;
    float amount;
    printf("Para cekmek istediginiz miktari giriniz: ");
    scanf("%f",&amount);
    printf("Hesap Numarasini Giriniz: ");
    scanf("%d",&accNo);
    for(int i=0;i<count;i++){
        if(acc[i].accountNo==accNo){
            acc[i].balance-=amount;
            printf("Yeni bakiye: %.2f\n", acc[i].balance);
         }
         else{
            printf("Yetersiz bakiye.\n");
         }
        }
     
}
void listAccounts(struct Account * acc, int count){
    printf("Hesap numarasi\tHesap Sahibi\tBakiye\n");
    for(int i=0;i<count;i++){
        printf("%d\t%s\t%.2f\n",acc[i].accountNo,acc[i].owner,acc[i].balance);
     } 

}
void listmyAccount(struct Account *acc, int count, int accNo){
    int accNo;
    printf("Hesap numarasi\tHesap Sahibi\tBakiye\n");
    for(int i=0;i<count;i++){
        if(acc[i].accountNo==accNo){  
     printf("%d\t%s\t%.2f\n",acc[i].accountNo,acc[i].owner,acc[i].balance);
     } 
    }

}