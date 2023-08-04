#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int display()
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
void deleteFirst()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
        {
            printf("list is Empty\n");
        }
    else
    {
        ptr=head;
        head=head->next;
        free(ptr);

    }    
}
void insertFirst(int val)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;

    if(head==NULL)
        head=temp;
    else
    {
        
        temp->next=head;
        head=temp;
      

    }    
}
void deleteEnd()
{
    struct node *ptr=head;
    struct node *p;
   
    
    if(head==NULL)
       printf("List is Empty\n");
    while(ptr->next!=NULL)
    {
        p=ptr;
        ptr=ptr->next;

    }
    p->next=NULL;
    free(ptr);
    return;

   
}
void midInsert(int val)
{
    int no;
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    ptr=head;
    printf("\nEnter Position You want to add after :");
    scanf("%d",&no);
    for(int i=0;i<no;i++)
    {
        ptr=ptr->next;
        if(ptr==NULL)
           printf("\n cant insert");
          
    }
    temp->next=ptr->next; 
    ptr->next=temp;
}

void midDelete()
{
    struct node *ptr,*p;
    int no,i;
    printf("\nEnter Position to delete:");
    scanf("%d",&no);
    ptr=head;
    if(head==NULL)
    {
        printf("\n Can't delete");
    }
    else
    {
       for(i=0;i<no;i++)
       {
        p=ptr;
        ptr=ptr->next;
        if(ptr==NULL)
           printf("\n can't Delete");
       }
       p->next=ptr->next;
       free(ptr);
    }

}
int main()
{
    display();
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
   display();
  midDelete();
    display();
}
