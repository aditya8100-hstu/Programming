#include<stdio.h>
int main(){
   int num,temp,remainder,sum=0 ;
   printf("Enter any number : ");
   scanf("%d" , &num);
   temp = num;
   while(temp!=0){
    remainder = temp % 10;
    sum = sum+(remainder*remainder*remainder);
    temp = temp/10;
   }
   if (num == sum){
    printf("This is a armstrong number\n");
   }
   else{
        printf("This is not a armstrong number\n");
   }
}
