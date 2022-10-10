#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stkarray *createstack(int);
void push(struct stkarray *);
void pop(struct stkarray *);
void display(struct stkarray *stk);

struct stkarray
{
    int top;
    int capacity;
    int *array;
};

struct stkarray *createstack(int cap)
{
    struct stkarray *stk;
    stk = (struct stkarray*)malloc(sizeof(struct stkarray));
    stk->top = -1;
    stk->capacity = cap;
    stk->array = (int*)malloc(sizeof(int) * stk->capacity);
    return (stk);
}

void push(struct stkarray *stk)
{
    int ele;
    if (stk->top == stk->capacity - 1)
        printf("Stack is Overflow.\n");
    else
    {
        printf("Enter Element to Insert: ");
        scanf("%d", &ele);
        stk->top++;
        stk->array[stk->top] = ele;
        printf("Element Insertsd.\n");
    }
}

void pop(struct stkarray *stk)
{
    int ele;
    if (stk->top == -1)
        printf("Stack is Underflow.\n");
    else
    {
        ele = stk->array[stk->top];
        stk->top--;
        printf("Poped value: %d", ele);
    }
}

void display(struct stkarray *stk)
{
    int i;
    if (stk->top == -1)
        printf("Stack is Underflow.\n");
    else
    {
        printf("    YOUR STACK:\n");
        for (i = 0; i <= stk->top; i++)
            printf("%d\n", stk->array[i]);
    }
}

void main()
{
    struct stkarray *stk;
    int capacity, choice;
    printf("Enter size of Stack:");
    scanf("%d", &capacity);
    stk = createstack(capacity);
    while (1)
    {
        system("cls");
        printf(" 1 PUSH\n 2 POP\n 3 DISPLAY\n 4 EXIT");
        printf("\nEnter your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: push(stk);
            break;
        case 2: pop(stk);
            break;
        case 3: display(stk);
            break;
        case 4: exit(0);
            break;
        default: printf("INVALID CHOICE,\n");
        }
        getch();
    }
}

