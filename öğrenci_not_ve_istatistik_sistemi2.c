#include <stdio.h>
#include <stdlib.h>

struct Student{
int id;
char name[50];
float midterm;
float final;
float average;
};

void calculateAverages(struct Student *s, int n);
float classAverages(struct Student *s, int n);
void findMinMax(struct Student *s, int n);
void saveToFile(struct Student *s, int n);

int main()
{
int n, passed =0, fail=0;

 printf("Ogrenci sayisini giriniz: ");
 scanf("%d", &n);

struct Student *students=malloc(n * sizeof(struct Student));

 if(students == NULL){
    printf("Hata! Bellek ayrilamadi\n.");
    exit(0);
 }
 for(int i=0; i<n ;i++){
    printf("\n%d. Ogrenci ID: ", i+1);
    scanf("%d", &students[i].id);
    printf("\n%d. Ogrenci ismi: ", i+1);
    scanf("%s", students[i].name);
    printf("\n%d. Ogrenci vizesi: ", i+1);
    scanf("%f", &students[i].midterm);
 }
 for(int i=0; i<n ;i++){
    printf("\n%d. Ogrenci finali: ", i+1);
    scanf("%f", &students[i].final);
    if(students[i].final <40){
      fail++;
    }
 }
calculateAverages(students, n);

findMinMax(students, n);

printf("\n----Sinif Istatistikleri-----\n");
printf("Sinif ortalamasi:%f\n ", classAverages(students, n));

for(int i=0;i<n;i++){
    if(students[i].average >= 60){
        passed++;
    }
    else {
        fail++;
    }
}
  printf("%d kadar ogrenci gecti\n", passed );
  printf("%d kadar ogrenci kaldi\n", fail );

saveToFile(students, n);

  free(students);

    return 0;
}
// her öğrencinin kendi ortalaması
void calculateAverages(struct Student *s, int n){//her bir öğrencinin ortalaması
  for(int i =0; i< n; i++){
    s[i].average= s[i].midterm * 0.4 + s[i].final * 0.6;
  }
}
  // sınıf ortalaması
float classAverages(struct Student *s, int n){
    float sum=0;
  for(int i=0; i<n; i++){
    sum += s[i].average;
  }
 float average = sum/n;
 return average;
}
  // en iyi ve en kötü notu bul
void findMinMax(struct Student *s,int n){
   int minI=0, maxI=0;
   for(int i=1;i<n;i++){
    if(s[i].average <s[minI].average){
        minI= i;
    }
    if(s[i].average >s[maxI].average){
        maxI= i;
   }
}
printf("En yuksek nota sahip ogrenci:%s (%.2f)\n",s[maxI].name, s[maxI].average);
printf("En dusuk nota sahip ogrenci:%s (%.2f)\n",s[minI].name, s[minI].average);
}
void saveToFile(struct Student *s,int n){
 FILE *file= fopen("students.txt", "w+");
 if(file == NULL){
    printf("Dosya acilamadi\n");
    exit(-1);
 }
 fprintf(file," ID | Name | Midterm | Final | Average\n" );
 fprintf(file, "---------------------------------------\n");

 for(int i=0;i<n;i++){
    fprintf(file," %d | %s | %f | %f | %f \n", s[i].id, s[i].name, s[i].midterm, s[i].final, s[i].average);
    }
fclose(file);
printf("\nVeriler students.txt dosyasina yazildi.\n");

}