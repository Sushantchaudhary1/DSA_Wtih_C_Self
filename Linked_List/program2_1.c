#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};

struct node *head=NULL;
void create();
void display();

int main(){
    create();
    create();
    create();
    display();
    return 0;
}
void create()
{
    struct node *temp,*ptr;
    int data;

    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data:");
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
}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d  ",ptr->info);
        ptr=ptr->next;
    }
}