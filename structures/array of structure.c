#include<stdio.h>
struct employee{

   char name;
   int age;
   double salary;

};

int main(){

    struct employee person[2];

    for(int i=0;i<2;i++){
        printf("Enter the information of the %d employee: \n", i+1);
        printf("Enter your name: ");
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%lf",&person[i].salary);
    }

    for(int i=0;i<2;i++){
        printf("\n The information of %d employee: \n",i+1);
        printf("The age: %d\n",person[i].age);
        printf("The salary: %lf\n",person[i].salary);
    }


}
