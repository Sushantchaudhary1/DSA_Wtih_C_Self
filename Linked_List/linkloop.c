
#include<stdio.h>
struct node{
    char info;
    struct node *next; 
   
};
struct node *head;
int main()
{
    struct node temp1,temp2,temp3,temp4,temp5;
     
     struct node *ptr1,*ptr2,*ptr3,*ptr4,*ptr5,*ptr;

    ptr1=&temp1;
    temp1.info='H';
    temp1.next=&temp2;
    

    ptr2=&temp2;
    temp2.info='E';
    temp2.next=&temp3;
   // printf("%c",ptr2->info);

    ptr3=&temp3;
    temp3.info='L';
    temp3.next=&temp4;
   // printf("%c",ptr3->info);

    ptr4=&temp4;
    temp4.info='L';
    temp4.next=&temp5;
    //printf("%c",ptr4->info);

    ptr5=&temp5;
    temp5.info='O';
    temp5.next=NULL;
   // printf("%c",ptr5->info);
     head=ptr1;

     ptr=head;
    while(ptr!=NULL){
        printf("%c",ptr->info);
        ptr=ptr->next;
    }
    
    
      return 0;
}
