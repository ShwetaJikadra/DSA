#include<stdio.h>
#include<conio.h>
#define n 5
int f=-1,r=-1,i;
int a[n];
void display()
{
    if(f<0 && r<0)
       printf("Empty");
       else{
   for(i=f; i<=r; i++)
    {
        printf("%d ", a[i]);
    }
       }
}
void insert(int val)
{
     printf("\n");
    if(r>=n-1)
    {
        printf("\nArray is full........");
    }
    else if(r<0)
    {
       f=r=0;
       a[r]=val;
    }
    else
    {
          ++r;
        a[r] = val;
    }
}
void delete()
{
    if(f==-1 && r==-1)
    {
        printf("\nArray is Empty.....................");
    }
    else{
        f++;
    }
}
void frontadd(int x)
{
    if(f==n-1)
    {
        printf("\nArray is Full......");
    }
    else if(f==-1 && r==-1)
    {
      f=r=0;
      a[f]=x;
    }
    else{
        --f;
        a[f]=x;
    }
}
void backdelete()
{
    if(f<0 && r<0)
    {
        printf("\nArray is empty....");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        r--;
    }
}

int main()
{
  backdelete();
  display();
  insert(10);
  display();
  backdelete();
  backdelete();
  display();
   
}


