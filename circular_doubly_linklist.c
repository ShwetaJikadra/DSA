#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *next;

};
struct node *head;


void FirstInsert(int val)
{
    struct node *ptr;
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        temp->pre=head;
    }
    else
    {
       ptr=head;
       head->pre=temp;
      
       while(ptr->next!=head)
       {
        ptr=ptr->next;
       }
        ptr->next=temp;
       temp->pre=ptr;
       temp->next=head;

     
      head=temp;
    }
   
    
}
void LastInsert(int val)
{
 struct node *ptr;
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        temp->pre=head;
    }
    else 
    {
       ptr=head;
       while(ptr->next !=head)
       {
        ptr=ptr->next;
       }
       ptr->next=temp;
       temp->pre=ptr;
       temp->next=head;
    }
   
}
void DeleteLast()
{
    struct node *ptr;
    struct node *p;
    if(head==NULL)
    {
       printf("List is Empty");
    }
    else if((head->next==head) && (head->pre==head))
    {
        head=NULL;
    }
    else
    {
      ptr=head;
 
 
 while(ptr->next !=head)
 {
      p=ptr;
      ptr=ptr->next;
 }    
 p->next=head;
 head->next=p;
 free(ptr);

        
    }

}

void display()
{
     struct node *ptr;
  ptr=head;
  if(head==NULL)
  {
    printf("\nempty List\n");
  }
  else
  {
    while(ptr->next!=head)
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
  struct node *ptr=head;
     if(head==NULL)
     {
      printf("\nList is Empty\n");
     }
     else if(head->next==head)
     {
           head=NULL; 
           free(head); 
     }
     else
     {
  ptr=head;
  while(ptr->next!=head)
  {
    ptr=ptr->next;
  } 
 //ptr=ptr->next
  ptr->next=head->next;
  free(head);
  ptr->next->pre=ptr;
  head=ptr->next;
}
}
void middelete()
{
  int a,i;
  struct node *ptr,*p;
  if(head==NULL)
  {
    printf("\nList is Empty so cannot delete\n");
  }

  else if(head->next==head)
  {
    printf("\ncannot delete mid beause only one Element\n");
  }
  else
  {
    printf("\nenter index after you want to delete :");
    scanf("%d",&a);
    ptr=head;
    for(i=0;i<a;i++)
    {
      p=ptr;
      ptr=ptr->next;
       

    }
    ptr=ptr->next;
    p=p->next;
    p->next=ptr->next;
    ptr->next->pre=p;
    free(ptr);

  }


}
void midInsert(int val)
{
  int a,i;
  struct node *ptr,*temp;
  temp=(struct node *)malloc(sizeof(struct node *));
  temp->data=val;
  printf("\nEnter position to add after value:");
  scanf("%d",&a);
  if(head==NULL)
  {
    printf("\n Empty List so not insert mid :");
  }
  else if(head->next==head)
  {
    printf("\ncannot insert mid beause only one Element\n");
  }
 else
  {
  ptr=head;
  for(i=0;i<a;i++)
  {
        ptr=ptr->next;
  }
  temp->next=ptr->next;
  temp->pre=ptr;
  ptr->next=temp;
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
    LastInsert(no);
     break;

     case 2:
     DeleteLast();
     break;

     case 3:
     printf("\nenter value to insert Mid :");
     scanf("%d",&no);
     midInsert(no);
     
     break;

     case 4:
     printf("enter value to insert Begin:");
     scanf("%d",&no);
     FirstInsert(no);
     break;

     case 5:
     deleteFirst();
     break;

     

     case 6:
     middelete();
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