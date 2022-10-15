#include <stdio.h>
#include <math.h>


int main()
{
int x1,y1,x2,y2,x3,y3;
double AB,BC,AC;
printf("Enter the first coordinate x1 y1:");
scanf("%d%d",&x1,&y1);
printf("Enter the first coordinate x2 y2:");
scanf("%d%d",&x2,&y2);
printf("Enter the first coordinate x2 y2:");
scanf("%d%d",&x3,&y3);

AB=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
BC=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
AC=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
printf("The length of the 3 sides is: %lf %lf %lf",AB,BC,AC);

double s,area;
s=(AB+BC+AC)*0.5;
area=sqrt(s*(s-AB)*(s-BC)*(s-AC));
printf("The area of the triangle is: %lf",area);
return 0;
}
