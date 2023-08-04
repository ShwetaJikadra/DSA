#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *pre;
    int data;
    struct node *next;
   
};
struct node *head=NULL;
void insertEnd(int val)
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    
    if(head==NULL)
    {
        head=temp;
        head->pre=NULL;
        head->next=NULL;
    }
    else
    {
        ptr=head;
        while(ptr->next !=NULL)
        {
          
         ptr=ptr->next;
        }
        temp->next=NULL;
        temp->pre=ptr;
        ptr->next=temp;
        }

    
}
void insertFirst(int val)
{
           struct node *temp;
           temp=(struct node *)malloc(sizeof(struct  node *));
           temp->data=val;
           if(head==NULL)
           {
           head=temp;
            head->pre=NULL;
           head->next=NULL;
           }
           else
           {
           temp->next=head;
           temp->pre=NULL;
           head=temp;
           }
        
}
void display()
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
         ptr=head;
        while(ptr->next!=NULL)
        {
              printf("%d ",ptr->data);
              ptr=ptr->next;
        }
        printf("%d ",ptr->data);
        printf("\n");
    }
}
void deleteFirst()
{
    struct node *ptr;
    if(head==NULL)
    {
       printf("List is Empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
    }
    else
    {
       ptr = head; 
        
        head = ptr->next;  
        head->pre=NULL;
        free(ptr);  
       
    }
}
void deleteEnd()
{
    struct node *ptr;
    struct node *p;
    if(head==NULL)
    {
       printf("List is Empty");
    }
    else if(head->next==NULL)
    {
        head=NULL;
    }
    else
    {
      ptr=head;
 
 
 while(ptr->next !=NULL)
 {
      p=ptr;
      ptr=ptr->next;
 }    
 p->next=NULL;
 free(ptr);

        
    }


}
void midDelete()
{
      struct node *ptr,*ptr1,*p;  
    int a,i;    
    printf("\n Enter position To delete Mid:");  
    scanf("%d",&a);
    if(head==NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
      ptr=head;  
      for(i=0;i<a;i++)  
      {  
         ptr1=ptr;      
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nNot Delete\n");  
            return;
        }  
      }
    
      
  ptr1->next=ptr->next;
  ptr->next->pre=ptr1;
  free(ptr);
    
     } 
}


void midInsert(int val)
{
    int i,a;

    struct node *ptr=head;
     struct node *p;
    struct node *temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
   
    if(head==NULL)
        {
        head=temp;
        head->pre=NULL;
        head->next=NULL;
        }
    else{
    printf("\nEnter Position to add Element mid:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
      ptr=ptr->next;
       if(ptr==NULL)
       {
        printf("\nNot insert Mid :\n");
       }
    }  
        temp->next=ptr->next;
         temp -> pre = ptr;  
       ptr->next = temp;  
       ptr->next->pre=temp;  
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
     deleteEnd();
     break;

     case 3:
     printf("\nenter value to insert Mid :");
     scanf("%d",&no);
     midInsert(no);
     break;

     case 4:
     printf("enter value to insert Begin:");
     scanf("%d",&no);
     insertFirst(no);
     break;

     case 5:
     deleteFirst();
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
    




