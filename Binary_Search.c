#include<stdio.h>
#include<conio.h>
#define n 10
int i;
int binary_search(int a[],int s)
{
    int h=n-1,l=0,mid;
    
  while(l<=h)
   {
       mid=(h+l)/2;
       if(a[mid]==s)   
       {
        return mid+1;
       }      
       else if(a[mid]>s)
       {
        h=mid-1;
       }
       else
       {
        l=mid+1;
       }
      
   }
   return -1;
}

int main()
{
  int a[n]={10,23,34,35,45,47,50,58,65,78};
  int s,x;
  for(i=0;i<n;i++)
  {
    printf("%d \t",a[i]);
  }
  printf("\nEnter Searching Value :");
  scanf("%d",&s);

  x=binary_search(a,s);
  
    printf("%d",x);
    
  
}
