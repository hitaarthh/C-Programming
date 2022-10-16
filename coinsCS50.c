#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float change;
    int rchange,coins=0;
    do
    {
        change=get_float("Change owed : ");
    }while(change<0);

    rchange=round(change*100);
    while(rchange>=25)
    {
        rchange=rchange-25;
        coins++;
    }
    while(rchange>=10)
    {
        rchange=rchange-10;
        coins++;
    }
    while(rchange>=5)
    {
        rchange=rchange-5;
        coins++;
    }
    while(rchange>=1 && rchange>0)
    {
        rchange=rchange-1;
        coins++;
    }
    printf("%d\n",coins);
}