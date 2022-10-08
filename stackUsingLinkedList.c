#include <stdio.h>
#include <stdlib.h>
struct node //Creating structure of our linked list
{
    int data;
    struct node* next;
};
struct node* start=NULL; //Globally declaring start node
//Declaring Functions
void push(int ele);
void pop();
void peek();
void traverse();

void main()  //Main Method Begins
{   int c=1; int choice;
    while(c==1)
    {
    printf("\nEnter 1 to Push, 2 to Pop, 3 to Peek, 4 to Traverse, 0 to Exit...");
    scanf("%d",&choice);
    switch(choice)
    {
    case 0:
        c=0;
        break;
    case 1:
        printf("\nEnter element to be pushed in STACK:");
        int ele;
        scanf("%d",&ele);
        push(ele);
        break;
    case 2:
        pop();
        break;
    case 3:
        peek();
        break;
    case 4:
        traverse();
        break;
    default:
        break;
    }//Switch-Case Ends
    }//While-Loop Ends
}// Main Function Ends
void push(int x)
{   struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));//Memory Allocation for temp Node
    temp->data=x;
    if(temp==NULL)
    {   start=temp;
        temp->next=NULL;
    }
    else
    {   temp->next=start;
        start=temp;
    }
}
void pop()
{
   if(start==NULL)
   { printf("\nSTACK is EMPTY!");
   }
   else
   { printf("\n%d is popped out of STACK!",start->data);
    start=start->next;
   }
}
void peek()
{if(start==NULL)
   { printf("\nSTACK is EMPTY!");
   }
   else
   { printf("\n%d is the top element!",start->data);
   }

}

void traverse()
{   if(start==NULL)
   printf("\nSTACK is EMPTY!");
   
   else
   { struct node* temp;
     temp=(struct node*)malloc(sizeof(struct node));
     temp=start;
     while(temp!=NULL)
     {
         printf(" %d |",temp->data);
         temp=temp->next;
     }
   }
}
