#include<stdio.h>
#define n 5
int f=-1,r=-1;
int a[n];
int display()
{
    int i;
    i=f;
    do
    {
        printf("%d ",a[i]);
        i=(i+1)%n;
    } while(i !=(r+1)%n);
    printf("\n");
    
}
int insert(int val)
{
    if((r+1)%n ==f)
        printf("\n Array is Full");
    else if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
    else{
        r=(r+1)%n;
        a[r]=val;
        }
}
int delete()
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
    display();
     insert(60);
        display();
  delete();
  display();
  delete();
  display(); 
  delete();
  display();
  delete();
  display();
  delete();
  display();

}