#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define n 10
int i;
int Linear(int a1[],int s)
{
    
    
    
    for(i=0;i<n;i++)
    {
           if(a1[i]==s)
           {
            printf("Found at index %d...........",i);
           }
              
    }

}
int main()
{
    int a;
    int a1[n];
    for(i=0;i<n;i++)
    {
       a1[i]=rand() % 100;
    }
     for(i=0;i<n;i++)
    {
           
            printf("%d \t",a1[i]);
        
              
    }
    

    printf("Enter value for Search :");
    scanf("%d",&a);
    Linear(a1,a);
}