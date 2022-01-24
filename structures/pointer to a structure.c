#include<stdio.h>
#include<stdlib.h>
struct rectangular
{
    int length;
    int width;
};
void decleration(struct rectangular *ptr)
{
    ptr -> length = 20;
    ptr -> width = 50;

}

int area1(struct rectangular r)
{
   int x = 10;
   int area = r.length * r.width;
   x = 20;
}
int main()
{
    struct rectangular *ptr;
    ptr = (struct rectangular*)malloc(sizeof(struct rectangular));
    decleration(ptr);
    int finalarea = area1(*ptr);
    printf("the area is : %d\n",finalarea);

}
