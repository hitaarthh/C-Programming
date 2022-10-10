#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
void enq();
void deq();
void display();
int a[MAX];
int FRONT=-1;
int REAR=-1;
void enq()
{
  int ele;
  if(REAR==MAX-1)
    printf("QUEUE IS FULL.\n");
  else
  {
    printf("Enter a Element to Insert:");
    scanf("%d",&ele);
    if(FRONT==-1 && REAR==-1)
    {
     FRONT=REAR=0;
     a[REAR]=ele;
     printf("Value inserted.\n");
    }
    else
    {
     REAR=REAR+1;
     a[REAR]=ele;
     printf("Value inserted.\n");
    }
  }
}
void deq()
{
 if(FRONT==-1)
   printf("QUEUE IS EMPTY.\n");
 else
   {
    printf("Dequeued values: %d\n",a[FRONT]);
    if(FRONT==REAR)
      FRONT=REAR=-1;
    else
      FRONT=FRONT+1;
   }
}
void display()
{
 int i;
 printf("  YOUR QUEUE:\n");
 if(FRONT==-1)
  printf("Queue is Empty.\n");
 else
  {
   for(i=FRONT;i<=REAR;i++)
    printf("%d\n",a[i]);
  }
}
void main()
{
 int choice;
 while(1)
 {
   system("cls");
   printf("  1 ENQUEUE\n  2 DEQUEUE\n  3 DISPLAY\n  4 EXIT\n");
   printf("Enter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:enq();
           break;
    case 2:deq();
           break;
    case 3:display();
           break;
    case 4:exit(0);
   }
   getch();
 }
}
