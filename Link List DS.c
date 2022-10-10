#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;
};
struct node *START;

struct node* createnode()
{
  struct node *n;
  n = (struct node*)malloc(sizeof(struct node));
  return n;
}

void insertnodelast()
{
  struct node *newnode, *temp;
  newnode = createnode();
  printf("Enter a Value to insert: ");
  scanf("%d", &newnode->info);
  newnode->link = NULL;
  if (START == NULL)
    START = newnode;
  else
  {
    temp = START;
    while (temp->link != NULL)
      temp = temp->link;
    temp->link = newnode;
  }
  printf("Node Inserted.\n");
}

void deletenodefirst()
{
  struct node *dele;
  dele = START;
  if (START == NULL)
    printf("List is Empty.\n");
  else
  {
    START = START->link;
    printf("Deleted Node: %d\n", dele->info);
    free(dele);
  }
}
void deletenodelast()
{
  struct node *dele, *temp;
  if (START == NULL)
    printf("List is Empty.\n");
  else if (START->link == NULL)
  {
    printf("Deleted Node: %d\n", START->info);
    START = NULL;
  }
  else
  {
    temp = START;
    while (temp->link != NULL)
    {
      dele = temp;
      temp = temp->link;
    }
    printf("Deleted Node: %d\n", temp->info);
    dele->link = NULL;
  }
}
void viewlist()
{
  struct node *v;
  if (START == NULL)
    printf("List is Empty.\n");
  else
  {
    v = START;
    printf("List Contain:\n");
    while (v != NULL)
    {
      printf(" %d\n", v->info);
      v = v->link;
    }
  }
}
void countnode()
{
  struct node *v;
  int count = 0;
  if (START == NULL)
    printf("List is Empty.\n");
  else
  {
    v = START;
    printf("List Contain:\n");
    while (v != NULL)
    {
      printf("%d\n", v->info);
      v = v->link;
      count++;
    }
  }
  printf("%d Node in the List.\n", count);
}
void insertnodefirst()
{
  struct node *newnode;
  newnode = createnode();
  printf("Enter Value to Insert:");
  scanf("%d", &newnode->info);
  if (START == NULL)
  {
    newnode->link = NULL;
    START = newnode;
  }
  else
  {
    newnode->link = START;
    START = newnode;
  }
  printf("Node Inserted.\n");
}
void insertnodesort()
{
  struct node *newnode, *temp, *save;
  int e;
  newnode = createnode();
  printf("Enter value to insert: ");
  scanf("%d", &e);
  newnode->info = e;
  if (START == NULL)
  {
    newnode->link = NULL;
    START = newnode;
  }
  else if (e < START->info)
  {
    newnode->link = START;
    START = newnode;
  }
  else
  {
    temp = START;
    while (e > temp->info && temp->link != NULL)
    {
      save = temp;
      temp = temp->link;
    }
    if (temp->link == NULL && e > temp->info)
    {
      temp->link = newnode;
      newnode->link = NULL;
    }
    else
    {
      save->link = newnode;
      newnode->link = temp;
    }
  }
  printf("Node Inserted.\n");
}
void insertgivpos()
{
  struct node *temp, *newnode, *save;
  int count = 0, pos, val;
  printf("Enter Value to insert: ");
  scanf("%d", &newnode->info);
  printf("Enter Position to insert: ");
  scanf("%d", &pos);
  if (START == NULL)
    printf("List is Empty.\n");
  else
  {
    temp = START;
    while (count <= pos && temp->link != NULL)
    {
      save = temp;
      count++;
      temp = temp->link;
      if (count == pos)
      {
        save->link = newnode;
        newnode->link = save->link;
      }
      printf("Node Inserted.\n");
    }
  }
}
void main()
{
  int choice;
  while (1)
  {
    system("cls");
    printf("1 Insert Node at the Beginning of the List.\n");
    printf("2 Insert Node at the end of List.\n");
    printf("3 Insert Node in Sorted Order.\n");
    printf("4 Delete first Node of the List.\n");
    printf("5 Delete Last Node of the List.\n");
    printf("6 Display all Node in the List.\n");
    printf("7 Count Number of Node in the List.\n");
    printf("8 Insert node at Given Position.\n");
    printf("9 Exit.\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: insertnodefirst();
      break;
    case 2: insertnodelast();
      break;
    case 3: insertnodesort();
      break;
    case 4: deletenodefirst();
      break;
    case 5: deletenodelast();
      break;
    case 6: viewlist();
      break;
    case 7: countnode();
      break;
    case 8: insertgivpos();
      break;
    case 9: exit(0);
      break;
    }
    getch();
  }
}
