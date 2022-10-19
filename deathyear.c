// This program will give you output of after how many years you will die according to your contient choice

#include<stdio.h>
void main()
{
 int ch,CH;
  float age,y=0;
 printf("Enter your age:\n");
 scanf("%f",&age);

 printf("choose your country for 1.ASIA  2.AFRICA  3.NORTH AMERICA  4.SOUTH AMERICA  5.EUROPE  6.AUSTRALIA\n");
 scanf("%d",&CH);

 switch(CH)
  {
      case 1:
       {
            printf("Enter your choice for 1.male  2.female\n");
            scanf("%d",&ch);
            switch(ch)
            {
             case 1:
             {
              y=75.2-age;
              printf("you will die after %.1f years",y);
              break;
             }
             case 2:
             {
              y=79.8-age;
              printf("you will die after %.1f years",y);
              break;
             }
             default:printf("choose the correct option\n");
              break;
            }
          break;
        }
      case 2:
       {
            printf("Enter your choice for 1.male  2.female\n");
            scanf("%d",&ch);
            switch(ch)
            {
             case 1:
             {
              y=61.4-age;
              printf("you will die after %.1f years",y);
              break;
             }
             case 2:
             {
              y=65.1-age;
              printf("you will die after %.1f years",y);
              break;
             }
             default:printf("choose the correct option\n");
              break;
            }
          break;
        }
      case 3:
       {
            printf("Enter your choice for 1.male  2.female\n");
            scanf("%d",&ch);
            switch(ch)
            {
             case 1:
             {
              y=76.3-age;
              printf("you will die after %.1f years",y);
              break;
             }
             case 2:
             {
              y=81.4-age;
              printf("you will die after %.1f years",y);
              break;
             }
             default:printf("choose the correct option\n");
              break;
            }
          break;
        }
       case 4:
       {
            printf("Enter your choice for 1.male  2.female\n");
            scanf("%d",&ch);
            switch(ch)
            {
             case 1:
             {
              y=73.2-age;
              printf("you will die after %.1f years",y);
              break;
             }
             case 2:
             {
              y=79.6-age;
              printf("you will die after %.1f years",y);
              break;
             }
             default:printf("choose the correct option\n");
              break;
            }
          break;
        }

      case 5:
       {
            printf("Enter your choice for 1.male  2.female\n");
            scanf("%d",&ch);
            switch(ch)
            {
             case 1:
             {
              y=79.7-age;
              printf("you will die after %.1f years",y);
              break;
             }
             case 2:
             {
              y=84.5-age;
              printf("you will die after %.1f years",y);
              break;
             }
             default:printf("choose the correct option\n");
              break;
            }
           break;
        }
      case 6:
       {
            printf("Enter your choice for 1.male  2.female\n");
            scanf("%d",&ch);
            switch(ch)
            {
             case 1:
             {
              y=81.4-age;
              printf("you will die after %.1f years",y);
              break;
             }
             case 2:
             {
              y=85.3-age;
              printf("you will die after %.1f years",y);
              break;
             }
             default:printf("choose the correct option\n");
              break;
            }
           break;
        }
       default:printf("choose correct option");
  }
}

