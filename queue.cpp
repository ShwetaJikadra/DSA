#include<stdio.h>
#define n 5
int f = -1, r = -1, i;
int a[n];
int display()
{
    for(i=f; i<=r; i++)
    {
        printf("%d ", a[i]);
    }
}

int insert(int val)
{
    printf("\n");
    if(r>=n-1)
    {
        printf("\n Array is full");
    }else if(r<0)
    {
        f = r = 0;
        a[r] = val;
    }
    else{
        ++r;
        a[r] = val;
    }
}

int delet()
{
    printf("\n");
    if(r==f)
    {
        printf("Array is Null");
    }else
    {
        f++;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
   // insert(60);
    display();
    delet();
    delet();
    delet();
    delet();
    delet();
    display();
}