#include <stdio.h>
#include <stdlib.h>
//Function Declaration
void insert_begin(int ele);
void insert_choice(int ele);
void insert_end(int ele);
void delete_begin();
void delete_choice();
void delete_end();
void traverse();

struct node
{
    int data;
    struct node* next;
};
struct node* start=NULL;
void main()
{int c=1,choice;
     
     int ele;
    while(c==1)
    { printf("Enter the number to do required operation on Linked List: \n1.Insert At Beginning \n2.Insert At Choice \n3.Insert At End \n4.Delete At Beginning \n5.Delete At Choice \n6.Delete At End \n7.Traverse Through the LinkedList \n0.Exit\n");
     scanf("%d",&choice);
      switch(choice)
     {
     case 0:
        c=0;
        break;
     case 1:
       printf("Enter element to be inserted:-");
       scanf("%d",&ele);
       insert_begin(ele);
       break;
     case 2:
       printf("Enter element to be inserted:-");
       scanf("%d",&ele);
       insert_choice(ele);
       break;
     case 3:
       printf("Enter element to be inserted:-");
       scanf("%d",&ele);
       insert_end(ele);
       break;
     case 4:
       delete_begin();
       break;
     case 5:
       delete_choice();
       break;
     case 6:
       delete_end();
       break;
     case 7:
       traverse();
       break;
     default:
      printf("\nChoose a correct choice...");
     break;
     }
    }
}
void insert_begin(int x)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    if(temp==NULL)
    {
        start=temp;
        temp->next=NULL;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}
void insert_end(int x)
{
    struct node* temp;
    struct node* t;
    temp=(struct node*)malloc(sizeof(struct node));
    //t=(struct node*)malloc(sizeof(struct node));
    t=start;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=temp;
    temp->data=x;
    temp->next=NULL;
}
void insert_choice(int x)
{
    struct node* temp;
    struct node* t;
    int pos,i=1;
    //t=(struct node*)malloc(sizeof(struct node));
    t=start;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    printf("Enter position to be added:");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        t=t->next;
        i++;
    }
    temp->next=t->next;
    t->next=temp;
}
void delete_begin()
{
    if(start==NULL)
    {
        printf("List is empty!");
    }
    else{
        start=start->next;
    }
}
void delete_end()
{
    if(start==NULL)
    {
        printf("List is empty!");
    }
    else{
        struct node* temp;
        temp=start;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp=temp->next;
    }
}
void delete_choice()
{if(start==NULL)
    {
        printf("List is empty!");
    }
    else{
    struct node* temp;
    struct node* t;
    int pos,i=1;
    printf("Enter position to be deleted:");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        t=t->next;
        i++;
    }
    t->next=t->next->next;
    }
}
void traverse()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=start;
    printf("START -->");
    while(temp!=NULL)
    {
        printf(" %d -->",temp->data);
        temp=temp->next;
    }
    printf(" NULL");
}
