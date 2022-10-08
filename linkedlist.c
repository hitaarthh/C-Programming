#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* start=NULL;

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
void main()
{int c=1;
    while(c==1)
    {switch(choice):
     case 1:
       printf("Enter element to be inserted:-");
       int ele;
       scanf("%d",&ele);
       insert_begin(ele);
     break;
     case 1:
     break;
     case 3:
     break;
     case 4:
     break;
    //traverse();
    printf("\nEnter 0 to exit else 1 to continue...");
    scanf("%d",&c);
    }
    traverse();
}