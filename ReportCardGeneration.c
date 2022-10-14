#include<stdio.h>
int main()
{
int i,a,b,c,d,e,n;
float f,cgpa;
char name[20];
printf("***********************************************************\n\n\n");
printf("Welcome to Student Report Card System\n");
 
 
printf("\n\n\n***********************************************************\n");
 
printf("Enter number of students in class\n");
scanf("%d",&n);
printf("Enter the Roll Number of student whose report card is required\n");
scanf("%d",&i);
switch (i)
{
case 1:
{
int a=99,b=98,c=97,d=96,e=96;
f=(float)(a+b+c+d+e)/5;
cgpa=(float)f/10;
printf("Name :Alisha \n");
printf("The Marks obtained by student are as follows :-\n");
printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
printf("The C.G.P.A obtained is %f \n",cgpa);
printf("The grade obtained is \n");
if(cgpa>9)
{
printf("A+ grade\n");
printf("Excellent performance\nKeep that up!\n");
}
else if(cgpa>8)
{
printf("A grade\n");
printf("Very Good\n Keep it up!\n");
}
else if(cgpa>7)
{
printf("B+ grade\n");
printf("Good performance\n");
}
else if(cgpa > 6)
{
printf("B Grade\n");
printf("Good performance. Can be improved!\n");
}
else if(cgpa > 5)
{
printf("C Grade\n");
}
else if(cgpa > 4)
{
printf("D Grade\n");
}
else
{
printf("E grade");
printf("Failed, have to apply for re-test\n");
}
break;
}

case 2:
 
{
int a=89,b=98,c=87,d=96,e=96;
f=(float)(a+b+c+d+e)/5;
cgpa=(float)f/10;
printf("Name : Rocky Malvia\n");
printf("The Marks obtained by student are as follows :-\n");
printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
printf("The C.G.P.A obtained is %f \n",cgpa);
printf("The grade obtained is \n");
if(cgpa>9)
{
printf("A+ grade\n");
printf("Excellent performance\nKeep that up!\n");
}
else if(cgpa>8)
{
printf("A grade\n");
printf("Very Good\n Keep it up!\n");
}
else if(cgpa>7)
{
printf("B+ grade\n");
printf("Good performance\n");
}
else if(cgpa > 6)
{
printf("B Grade\n");
printf("Good performance. Can be improved!\n");
}
else if(cgpa > 5)
{
printf("C Grade\n");
}
else if(cgpa > 4)
{
printf("D Grade\n");
}
else
{
printf("E grade");
printf("Failed, have to apply for re-test\n");
}
break;
}
case 3:
 
 
{
int a=89,b=88,c=87,d=96,e=96;
f=(float)(a+b+c+d+e)/5;
cgpa=(float)f/10;
printf("Name : Twinkle Khajuria\n");
printf("The Marks obtained by student are as follows :-\n");
printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
printf("The C.G.P.A obtained is %f \n",cgpa);
printf("The grade obtained is \n");
if(cgpa>9)
{
printf("A+ grade\n");
printf("Excellent performance\nKeep that up!\n");
}
else if(cgpa>8)
{
printf("A grade\n");
printf("Very Good\n Keep it up!\n");
}
else if(cgpa>7)
{
printf("B+ grade\n");
printf("Good performance\n");
}
else if(cgpa > 6)
{
printf("B Grade\n");
printf("Good performance. Can be improved!\n");
}
else if(cgpa > 5)
{
printf("C Grade\n");
}
else if(cgpa > 4)
{
printf("D Grade\n");
}
else
{
printf("E grade");
printf("Failed, have to apply for re-test\n");
}
break;
}
case 4:
 
{
int a=89,b=98,c=57,d=96,e=96;
f=(float)(a+b+c+d+e)/5;
cgpa=(float)f/10;
printf("Name : Ayushi Sharma\n");
printf("The Marks obtained by student are as follows :-\n");
printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
printf("The C.G.P.A obtained is %f \n",cgpa);
printf("The grade obtained is \n");
if(cgpa>9)
{
printf("A+ grade\n");
printf("Excellent performance\nKeep that up!\n");
}
else if(cgpa>8)
{
printf("A grade\n");
printf("Very Good\n Keep it up!\n");
}
else if(cgpa>7)
{
printf("B+ grade\n");
printf("Good performance\n");
}
else if(cgpa > 6)
{
printf("B Grade\n");
printf("Good performance. Can be improved!\n");
}
else if(cgpa > 5)
{
printf("C Grade\n");
}
else if(cgpa > 4)
{
printf("D Grade\n");
}
else
{
printf("E grade");
printf("Failed, have to apply for re-test\n");
}
break;
}
}
 
if(i>=5)
{
for(i=5;i<=n;i++)
{
printf("Enter the name of student having Roll number %d\n",i);
scanf("%s",&name);
printf("enter the marks of student in 5 subject\n");
scanf("%d\t%d\t%d\t%d\t%d",&a,&b,&c,&d,&e);
float f=(a+b+c+d+e)/(float)5;
float cgpa = f/(float)10;
printf("**********************************************\n");
printf("Name: %s\n",name);
printf("Marks in different subjects are as follows:-\n");
printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
printf("The C.G.P.A obtained by student is : %f \n",cgpa);
printf("The Grade obtained is : ");
if(cgpa>9)
{
printf("A+ grade\n");
printf("Excellent performance\nKeep that up!\n");
}
else if(cgpa>8)
{
printf("A grade\n");
printf("Very Good\n Keep it up!\n");
}
else if(cgpa>7)
{
printf("B+ grade\n");
printf("Good performance\n");
}
else if(cgpa > 6)
{
printf("B Grade\n");
printf("Good performance. Can be improved!\n");
}
else if(cgpa > 5)
{
printf("C Grade\n");
}
else if(cgpa > 4)
{
printf("D Grade\n");
}
else
{
printf("E grade");
printf("Failed, have to apply for re-test\n");
}
printf("----------------------------------------\n");
}
}
return 0;
}
