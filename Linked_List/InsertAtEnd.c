#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};

struct node *head=NULL;
void create(struct node *);
void display(struct node *);
void InsertAtBeg(struct node *);
void InsertAtEnd(struct node *);


int main(){
 int ch;
 while(1)
 {
    printf("\nPress 1-Create  2-Display 3-InsertAtBeginning 4-InsertAtEnd 0-Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
             create(head);
             break;

        case 2:
            display(head);
            break;

        case 3:
            InsertAtBeg(head);
            break;
        case 4:
        InsertAtEnd(head);
        break;

        case 0:
            exit(1);
            break;
            default:
            printf("Wrong choice:");

    }
 }
    return 0;
}
void create(struct node *ptr)
{
    struct node *temp;
    int data;

    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the Data:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
         ptr->next=temp;
    }
    printf("Node created Successfully.....");
}
void display(struct node *ptr)
{
    if(head==NULL){
     printf("Empty Linked List.....");
    }
     else{
 
     printf("\nLinked list is:\n");
    while(ptr!=NULL){
        printf("%d  ",ptr->info);
        ptr=ptr->next;
         }
   }
}

void InsertAtBeg(struct node *ptr)
{
 struct node *temp;
    int data;

    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the Data:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    temp->next=ptr;
    head=temp;
    printf("Node Inserted successfully......");
}

void InsertAtEnd(struct node *ptr)
{
   struct node *temp;
    int data;

    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the Data:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
         ptr->next=temp;
    }
    printf("Node Inserted Successfully.....");
} 


