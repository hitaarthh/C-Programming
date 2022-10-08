#include <stdio.h>
int main(){
    int c_date, c_month, c_year;
    scanf("%d %d %d",&c_date,&c_month,&c_year);
    int n_date, n_month, n_year;
    n_year=c_year;
    if (c_month==1 ||c_month==3 ||c_month==5 || c_month==7 || c_month==8 || c_month ==10 ||(c_month==12 && c_date<30)){
        if (c_date<=30){
            n_date=c_date+1;
            n_month=c_month;
        }
        else{
            n_date=1;
            n_month=c_month+1;
        }
        
    }

    else if (c_month==4 ||c_month==6 ||c_month==9 || c_month==11){
        if (c_date<=29){
            n_date=c_date+1;
            n_month=c_month;
        }
        else{
            n_date=1;
            n_month=c_month+1;
        }
        
    }

    else if (c_month==2){
        if (c_date<=27){
            n_date=c_date+1;
        }
        else{
            if ((c_year%4==0 &&c_year%100==0)||(c_year%400==0)){
                n_date=c_date+1;
                n_month=c_month;
                }
            else{
                n_date=1;
                n_month=c_month+1;
            }
        }
        
    }

    else if (c_month==12 && c_date==31){
        n_date=1;
        n_month=1;
        n_year=c_year+1;
    }
    printf("%d %d %d",n_date,n_month,n_year);
    return 0;
}
