#include<stdio.h>
struct rectangular
{
    int length;
    int width;
};
int main()
{

    struct rectangular *ptr;
    ptr = (struct rectangular*)malloc(sizeof(struct rectangular));
    ptr -> length = 20;
    ptr -> width = 20;
    int area = (ptr -> length)*(ptr -> width);
    printf("the area is : %d\n",area);

}

