#include<stdio.h>
#include<stdlib.h>
#define n 8

int top=-1,a[n],i;
void dis()
{
    if(top<0)
    {
        printf("\n Array is Empty.............");
    }
    else{
        for(i=0;i<=top;i++)
        {
            printf("\n %d",a[i]);
        }
    }
}
int push(int val)
{
    if(top>=n-1)
    {
        printf("\n Array is Full.............");
    }
    else{
        ++top;
        a[top]=val;
    }
}
void pop()
{
    if(top<0)
    {
        printf("\n Array is already empty.............");
    }
    else{
        --top;
        
    }
}
int add(int val)
{
    if(top>=n-1)
    {
        printf("\n Array is Full.............");
    }
    else{
    top++;
    for(i=top;i>=0;i--)
    {
       
    a[i]=a[i-1];
    }
    a[0]=val;
    }
    
}
int del()
{
   if(top<0)
    {
        printf("\n Array is already empty.............");
    }
    else{
        for(i=0;i<top;i++)
    {
      
    a[i]=a[i+1];
    }
        
    }
    top--;
}

int main()
{
 int c,n1;
 while(1)
 {
 printf("\n1. Push :");
 printf("\n2. Pop :");
 printf("\n3. Add :");
 printf("\n4. Delete :");
 printf("\n5. Display :");
 printf("\n6. Break :");
 printf("\nEnter Your Choice :");
 scanf("%d",&c);
 switch(c)
 {
    case 1:
      printf("\nEnter value for push:");
      scanf("%d",&n1); 
      push(n1);
    break;
    case 2:
      
      pop(n);
    break;
    case 3:
      printf("\nEnter value for Add :");
      scanf("%d",&n1); 
      add(n1);
    break;
    case 4:
        del();
    break;
    case 5:
      dis();
      break;
      case 6:
         exit(0);
        break;
    default:
      printf("\n Your choice is wrong................");  
 }
 }

}
