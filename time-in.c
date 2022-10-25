#include <stdio.h>
#include <time.h>

int main () {
   time_t seconds;

   seconds = time(NULL);
   printf("Hours since october 25 , 2022 = %ld\n", seconds/3600);
  
   return(0);
}
