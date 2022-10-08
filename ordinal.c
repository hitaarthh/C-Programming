#include<stdio.h>

char *ordinal(int v)
{

    if(v==11 || v==12 || v==13){
        return ("th");}

    v%=10;

    if(v==1){
        return ("st");}
    if(v==2){
        return ("nd");}
    if(v==3){
        return ("rd");}
    return ("th");
}

int main()
{

    int c,a=10;

    for( c=1; c<=20; c++){
        printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
        c, ordinal(c),
        c+20, ordinal(c+20),
        c+40, ordinal(c+40),
        c+60, ordinal(c+60),
        c+80, ordinal(c+80)
        );
    }

    return (0);
}