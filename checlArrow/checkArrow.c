#include<stdio.h>
int main()
{
 int chr1, chr2;
 printf("Press any arrow key...\n");
 chr1 = getch();
 if (chr1 == 0xE0) //to check scroll key interrupt
 {
  chr2 = getch();  //to read arrow key
  switch(chr2)
  {
   case 72: printf("UP ARROW KEY PRESSED\n");
      break;
   case 80: printf("DOWN ARROW KEY PRESSED\n");
      break;
   case 75: printf("LEFT ARROW KEY PRESSED\n");
      break;
   case 77: printf("RIGHT ARROW KEY PRESSED\n");
      break;
   default: printf("OTHER KEY PRESSED: %d %d\n", chr1, chr2);
      break;
  };
 }
 return 0;
}
