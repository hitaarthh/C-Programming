#include <stdio.h>
int max=100;
int top = -1; 
int stack[100]; // Initializing STACK using an array

// Function prototypes
void push();       
int pop();         
int peek();        
int isEmpty();   
void traverse();


int main(){
    int choice,c=1;
    while(c==1){
        printf("\n****** \n");
        printf("Press 1 to Push \nPress 2 to Pop \nPress 3 to Peek \nPress 4 to Check if STACK is EMPTY ");
        printf("\nPress 5 to Traverse \nPress 0 to Exit\n");
        scanf("%d", &choice);
        printf("\n****** \n");
        switch(choice){
            case 0: c=0; break;
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: 
            if(isEmpty())
            {
                printf("Stack is EMPTY!\n");
            }
            else
            {
                printf("Stack is NOT empty!\n");
            }
            break;
            case 5: traverse(); break;
            default: printf("Please choose a correct option!\n");
        }
    }
    return 0;
}

void push()
{// Push element to the top of the stack
    if(top == max-1)
        printf("STACK Overflow! \n");
    else{
        int ele;
        printf("\nEnter element to be pushed into the STACK: ");
        scanf("%d", &ele);
        top++;
        stack[top] = ele;
    }
}

int pop()
{//Remove and return the top most element of the stack
    if(top == -1)
        printf("STACK is EMPTY!\n");
    else{
        int ele = stack[top];
        printf("%d popped out of the stack\n", ele);
        top--;
        return ele;
    }
    return -1;
}

int peek()
{//Return the top most element of the stack
    int ele = stack[top];
    printf("%d is the top most element of the stack\n", ele);
    return ele;
}

int isEmpty()
{//Check if the stack is EMPTY or not
    if(top == -1)
        return 1;
    
    return 0;
}

void traverse()
{//Printing all STACK elements
  if(top!=-1)
  { for(int i=0;i<=top;i++)
    
      printf("%d ",stack[i]);
    
  }
    printf("\n");
}

