#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[12];
    int length;
    int size;
};
void print(struct Array arr){
    int i;
    for(i=0; i<arr.length; i++)
        printf("%d ",arr.A[i]);
}
struct Array *Union(struct Array *Arr1,struct Array *Arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *Arr3 =(struct Array *)malloc(sizeof(struct Array));
    while(i<Arr1->length && j<Arr2->length)
    {
        if(Arr1->A[i] < Arr2->A[j])
        {
             Arr3->A[k] = Arr1->A[i] ;
             k++;i++;
        }
        else if(Arr1->A[i] > Arr2->A[j])
        {
          Arr3->A[k] = Arr2->A[j] ;
          k++; j++;
        }
        else
        {
           Arr3->A[k] = Arr2->A[j] ;
           k++;j++;i++;
        }
    }

    for(; i<Arr1->length; i++)
    {
      Arr3->A[k] = Arr1->A[i];
      k++;
    }
    for(; j<Arr2->length; j++)
    {
      Arr3->A[k] = Arr2->A[j];
      k++;
    }
    Arr3->length=k;
    Arr3->size=12;
    return Arr3;
}

struct Array *Intersection(struct Array *Arr1,struct Array *Arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *Arr3 =(struct Array *)malloc(sizeof(struct Array));
    while(i<Arr1->length && j<Arr2->length)
    {
        if(Arr1->A[i] < Arr2->A[j])
        {
            i++;
        }
        else if(Arr1->A[i] > Arr2->A[j])
        {
         j++;
        }
        else
        {
           Arr3->A[k] = Arr2->A[j] ;
           k++;j++;i++;
        }
    }
    Arr3->length=k;
    Arr3->size=12;
    return Arr3;
}

int main()
{
    struct Array Arr1 = {{2,5,7,10,13,17},6,10};
    struct Array Arr2 = {{4,5,9,12,17,19},6,10};
    struct Array *Arr3;
    Arr3 = Intersection(&Arr1,&Arr2);
    print(*Arr3);
    return 0;
}
