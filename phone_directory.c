#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define True 1
#define False 0


typedef struct {
    char name[50];
    char surname[60];
    char phone_number[7];
}Record;

void menu();
int phoneAdd();
int phoneList();
int phoneSearch(char*);
int phoneDelete();

int main(){
    int choice;
    char name1[50];
    while(True){
        menu();
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                phoneAdd();
                break;
            case 2:
                phoneList();
                break;
            case 3:
                char name1[50];
                printf("Enter the name to search:");
                scanf("%s", name1);
                phoneSearch(name1);
                break;
            case 4:
                phoneDelete();
                break;
            default:
                printf("Exiting the application.\n");
                return 1;
        }
    }

    return 0;

}
void menu(){
    printf("\nPhone Directory Menu:\n");
    printf("1. Add a new record\n");
    printf("2. List all records\n");
    printf("3. Search for a record by name\n");
    printf("4. Delete a record\n");
    printf("5. Exit\n");
}

int phoneAdd(){
    Record new_record;
    FILE* fptr;
    fptr = fopen("C:\\Users\\fmmer\\Desktop\\Ccalismalarim\\data.txt1", "a");
    if(fptr == NULL){
        printf("Error opening file!\n");
        return 0;
    }
    printf("Enter name:");
    scanf("%s", new_record.name);
    printf("Enter surname:");
    scanf("%s", new_record.surname);
    printf("Enter phone number: ");
    scanf("%s", new_record.phone_number);

    fprintf(fptr, "\n%s %s %s\n", new_record.name, new_record.surname, new_record.phone_number);
    fclose(fptr);
    printf("Record added successfully!\n");
    return 1;
}

int phoneList(){
    Record record;
    FILE* flsptr;
    flsptr = fopen("C:\\Users\\fmmer\\Desktop\\Ccalismalarim\\data.txt", "r");
    if(flsptr == NULL){
        printf("Error opening file!\n");
        return 0;
    }
    printf("Phone Directory:\n");
    
    while(!feof(flsptr)){
        fscanf(flsptr, "%s %s %s", record.name, record.surname, record.phone_number);
        printf("%s %s %s\n", record.name, record.surname, record.phone_number);
        
    }
    fclose(flsptr);

    return 1;
}
int phoneSearch(char*){
    Record record;
    FILE* fsearchptr;
    fsearchptr = fopen("C:\\Users\\fmmer\\Desktop\\Ccalismalarim\\data.txt", "r");
    if(fsearchptr == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    char search_name[50];
    printf("Enter the name to search:");
    scanf("%s", search_name);
    int found = False;
    while(!feof(fsearchptr)){
        fscanf(fsearchptr, "%s %s %s", record.name, record.surname, record.phone_number);
        if(strcmp(record.name, search_name) == 0){
            printf("Record found: %s %s %s\n", record.name, record.surname, record.phone_number);
            found = True;
            break;
        }
        if(!found){
            printf("The person is not listed this phone directory.\n");
        }
    }
    return 1;
}
int phoneDelete(){
    Record record;
    FILE* fdeleteptr;
    fdeleteptr = fopen("C:\\Users\\fmmer\\Desktop\\Ccalismalarim\\data.txt", "r");
    if(fdeleteptr == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    char delete_name[50];
    printf("Enter the name to remove from your phone directory:");
    scanf("%s", delete_name);
    FILE* temp_ptr;
    temp_ptr = fopen("C:\\Users\\fmmer\\Desktop\\Ccalismalarim\\temp.txt", "w");
    if(temp_ptr == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    while(!feof(fdeleteptr)){
        fscanf(fdeleteptr, "%s %s %s", record.name, record.surname, record.phone_number);
        if(strcmp(record.name, delete_name) != 0){
            fprintf(temp_ptr, "%s %s %s\n", record.name, record.surname, record.phone_number);
        }
    }
    fclose(fdeleteptr);
    fclose(temp_ptr);
    remove("C:\\Users\\fmmer\\Desktop\\Ccalismalarim\\data.txt");
    rename("C:\\Users\\fmmer\\Desktop\\Ccalismalarim\\temp.txt", "C:\\Users\\fmmer\\Desktop\\Ccalismalarim\\data.txt");
    printf("Record deleted successfully!\n");

    return 1;
}