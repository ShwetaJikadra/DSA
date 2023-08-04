#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void display()
{
    struct node *ptr=head;
    if(head==NULL)
        printf("List is Empty");
    else
    {
        while(ptr !=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }    
}
void insertEnd(int val)
{
    struct node *ptr=head;
    struct node *temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    temp->next=NULL;
if(head==NULL)
{
    head=temp;
    return;
}
while(ptr->next !=NULL)
     ptr=ptr->next;
ptr->next=temp;
return;   

}
void deleteend()
{
 struct node *ptr=head;
 struct node *p;
 if(head==NULL)
     printf("List is Empty");
 while(ptr->next !=NULL)
 {
      p=ptr;
      ptr=ptr->next;
 }    
 p->next=NULL;
 free(ptr);
 return;
}
void firstInsert(int val)
{
   
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    temp->next=head;
    head=temp;
    return;
}
void firstDelete()
{
         struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
       
    }     
}
void midInsert(int val)
{
     int i,a;   
    struct node *ptr, *temp;  
    if(head==NULL)
       printf("You not insert in mid because list is Empty\n");
    else
    {
    temp = (struct node *) malloc (sizeof(struct node *));  
    temp->data = val;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&a);  
        ptr=head;  
        for(i=0;i<a;i++)  
        {  
            ptr = ptr->next;  
            if(ptr->next == NULL)  
            {  
                printf("\nnot possible list is less then you enter\n ");  
                
            }  
          
        }  
        temp ->next = ptr ->next;   
        ptr ->next = temp;   
    } 
}
void midDelete()
{
     struct node *ptr,*ptr1;  
    int a,i;    
    printf("\n Enter number(index) after delete: \n");  
    scanf("%d",&a);  
    ptr=head;  
    if(head==NULL)
       printf("\nempty List\n");
    else
    {
    for(i=0;i<a;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nnot possible because  not index this mid:");  
         
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    }
}
int main()
{
  int c,no;
  while(1)
  {
   printf("\n1.INSERT END"); 
   printf("\n2.DELETE END"); 
   printf("\n3.INSERT MID"); 
   printf("\n4.BEGIN INSERT"); 
   printf("\n5.BEGIN DELETE"); 
  
   printf("\n6.DELETE MID"); 
   printf("\n7.DISPLAY");
   printf("\n8.EXIT");  

  printf("\n\nEnter Your Choice :"); 
  scanf("%d",&c);
  switch(c)
  {
     case 1:
     printf("\nenter value to insert End:");
     scanf("%d",&no);
     insertEnd(no);
     break;

     case 2:
     deleteend();
     break;

     case 3:
     printf("\nenter value to insert Mid :");
     scanf("%d",&no);
     midInsert(no);
     break;

     case 4:
     printf("enter value to insert Begin:");
     scanf("%d",&no);
     firstInsert(no);
     break;

     case 5:
     firstDelete();
     break;

     

     case 6:
     midDelete();
     break;

     case 7:
    display();
     break;

     case 8:
     exit(0);
     break;

     default:
        printf("\n\nYour choice is wrong..................");
        break;
  }

  }
}