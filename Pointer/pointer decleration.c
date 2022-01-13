// Pointer Declaration
#include <stdio.h>
int main(){

  int x = 10; int y = 20;

  int  *ptr1 , *ptr2 ;

  ptr1 = &x ;
  ptr2 = &y ;

  printf("value of x is : %d\n" , x);
  printf("address of x is : %d\n", &x);

  printf( "Address of ptr1 is : %d\n " , ptr1 );
    printf( "content of ptr1 is : %d\n " , *ptr1 );

printf( "Address of ptr2 is : %d\n " , ptr2 );
    printf( "content of ptr2 is : %d\n " , *ptr2 );

    int sum  = *ptr1 + *ptr2 ;
    printf("Sum is : %d\n", sum );

    int ** ptr3;
    ptr3 = &ptr2;
    printf("Address of ptr3 is: %d\n" , ptr3);
    printf("Content of ptr3 is: %d\n" , **ptr3);


}
