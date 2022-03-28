#include<stdio.h>
int main()
{
    char x = 'A';
    printf("The character is : %c\n",x);
    printf("The ASCII value of the character is: %d\n",x);

    char y[] = "My name is Aditya";
    printf("My Full Name is: %s\n",y);

    char z[50];
    printf("ENTER YOUR FULL NAME - ");
    gets(z);
    printf("USER'S FULL NAME: %s\n",z);

}
