#include<stdio.h>

struct person{
    int age;
    double sallary;
};
int main(){

    struct person person1,person2;

    person1.age = 20;
    person1.sallary = 10000.100;
    printf("%d\n",person1.age);
    printf("%lf\n",person1.sallary);


    printf("Enter person2 information: \n");

    printf("Enter person2 age: ");
    scanf("%d",&person2.age);
    printf("Age: %d\n",person2.age);


    printf("Enter person2 sallary: ");
    scanf("%lf",&person2.sallary);
    printf("sallary: %.3lf\n",person2.sallary);

    printf("Mr X  is %d years old and he earned %.lf tk per year", person2.age , person2.sallary );


}
