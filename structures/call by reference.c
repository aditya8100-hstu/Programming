#include<stdio.h>

struct rectangular{
     int length;
     int width;
};
int area(struct rectangular *r){
    r -> length = 12;
    r ->  width = 20;
   return r -> length *  r ->  width;
}
int main(){

  struct rectangular r;
  r.length = 10;
  r.width = 20;

  int area1 = area(&r) ;
  printf("The first area is : %d\n", area1);

  int area2 = (r.length) * (r.width) ;
  printf("The second area is : %d\n", area2);

  return 0;

}
