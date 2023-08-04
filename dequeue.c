#include<stdio.h>

#define n 5
int a[n];
int f=-1,r=-1,i;
void insertFront(int val)
{
  if(r==n-1 && f<=0)
  {
    printf("\nQueue Is Full\n");
  }
  else if(f==r)
  {
    f=r=0;
    a[r]=val;
  }
  else if(f>=1 && r!=n-1)
  {
      --f;
      a[f]=val;
  }
  else if(f==0 && r<n-1)
  {
       for(i=r;i>=f;i++)
       {
        a[++r]=a[r];
       }
       --f;
       a[f]=val;


  }
  else
  {
     --f;
       a[f]=val;
  }
}
void display()
{
  for(i=f;i<=r;i++)
  {
    printf("%d ",a[i]);
  }
}

int main()
{
  insertFront(10);
  display();
}