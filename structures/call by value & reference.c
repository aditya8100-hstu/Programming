#include<stdio.h>

struct person{
    int age;
    int salary;
};

int age(struct person p1){
   p1.age = 40;
   printf("The age is : %d\n",p1.age);
}

int salary (struct person *p2){
   p2 -> salary = 2000;
   printf("The salary is :%d\n",p2 -> salary);
}

int main(){
   struct person p;
   p.age =  20;
   printf("The age is : %d\n",p.age);
   age(p);

   p.salary = 1000;
   salary(&p);
   printf("The salary is : %d\n",p.salary);
   //salary(&p);

}
