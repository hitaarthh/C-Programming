#include <stdio.h>
int main(){
    int n=7;
    int first=1;
    int second=3;
    int third=first+second;
    printf("%d %d %d ",first,second,third);
    
    for (int i=0; i<n-2; i++){
        int fourth= first+second+third;
        printf("%d ",fourth);
        first=second;
        second=third;
        third=fourth;
    }
    return 0;
}
