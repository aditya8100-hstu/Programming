//pointer to an array
//Basic idea about Array and pointer

#include<stdio.h>
int main(){

    int array[3] = {4,5,10};
    printf("Element of 1st array : %d\n", array[0]);
    printf("Element of 1st array : %d\n", array[1]);
    printf("Element of 1st array : %d\n", array[2]);


    printf("Address of array : %d\n", array);
    printf("Address of 1st array : %d\n", &array[0]);
    printf("Element of 1st array : %d\n", &array[1]);
    printf("Element of 1st array : %d\n", &array[2]);

    printf("1st Element of array : %d\n" , *array);
    printf("1st Element of array : %d\n" , *(array+1));
    printf("1st Element of array : %d\n", *(array+2));
     printf("1st Element of array : %d\n", *(array+3));



}
