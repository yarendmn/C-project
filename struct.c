#include <stdio.h>
#include <stdlib.h>


/*struct Person{
    double salary;
    int age;
};


int main(){
    struct Person person1 = {.age = 25 , .salary= 4321.78};
    

    printf("Age of person1 and salary is : %d and %f", person1.age, person1.salary);
    return 0;
}*/

/*typedef struct Person{
    double salary;
    int age;
}person;

int main(){
    person person1= {.age = 25 , .salary= 4321.78};

    printf("Age of person1 and salary is : %d and %.2f", person1.age, person1.salary);
    return 0;

}*/

/*typedef struct Complex {
    double real;
    double imagine;
} complex;

int main(){
    complex c1 = {.real = 21.87, .imagine = 12.34};
    complex c2 = {.real = 43.21, .imagine = 56.78};

    complex sum;
    sum.real = c1.real + c2.real;
    sum.imagine = c1.imagine + c2.imagine;

    printf("Complex number 1: %.2f + %.2fi\n", c1.real, c1.imagine);
    printf("Complex number 2: %.2f + %.2fi\n", c2.real, c2.imagine);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imagine);
    return 0;
}*/

enum Size {
    Small,
    Medium,
    Large,
    ExtraLarge
};

int main() {
    enum Size shirtSize = Medium;

    printf("Shirt size: %d\n", shirtSize); // Output: 1
    return 0;
}
