#include<stdio.h>
struct node
{
    int data;
    char ch;
   struct node *ptr;
    
};
int main()
{
    struct node a,b;
    a.data=10;
    a.ch='A';
    a.ptr=NULL;

    b.data=20;
    b.ch='B';
    b.ptr=NULL;

    b.ptr=&a;
    printf("A Data: %d\t A Char : %c",b.ptr->data,b.ptr->ch);
    printf("\n");
    b.ptr=&a;
    printf("B Data: %d\t B Char : %c",a.ptr->data,a.ptr->ch);


}