#include<stdio.h>
#include<conio.h>
#define n 10
 int i,j,t,k;
void display(int a[])
{
   
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
             t=a[j];
             a[j]=a[i];
             a[i]=t; 
        }
    }
   }
}
int main()
{
    int a[n]={10,9,12,56,89,7,51,80,99,15};
    for(k=0;k<n;k++)
    {
        printf("%d \t",a[k]);
    }
    display(a);
     printf("\n");
    for(k=0;k<n;k++)
    {
       
        printf("%d \t",a[k]);
    }
}