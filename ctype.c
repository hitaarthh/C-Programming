#include <stdio.h>
#include <ctype.h>

int main(){
    int s1='2';
    //  int isalnum(int c) checks if the passed character is alphanumeric.
    if( isalnum(s1) ) {
      printf("s1 = |%c| is alphanumeric\n", s1 );
   } 
   else {
      printf("s1 = |%c| is not alphanumeric\n", s1 );
   }


   //   int isalpha(int c) checks if the passed character is alphabetic.
   int s2='a';
   if( isalpha(s2) ) {
      printf("s2 = |%c| is alphabetical\n", s2 );
   } 
   else {
      printf("s2 = |%c| is not alphabetical\n", s2 );
   }


   //   scntrl() function checks if the passed character is a control character.
   int i=0, j=0;
   char str1[] = "all \a about \t programming";
   char str2[] = "tutorials \n point";
  
   /* Prints string till control character \a */
   while( !iscntrl(str1[i]) ) {
      putchar(str1[i]);
      i++;
   }
  
   /* Prints string till control character \n */
   while( !iscntrl(str2[j]) ) {
      putchar(str2[j]);
      j++;
   }


   //   isdigit(int c) checks if the passed character is a decimal digit character.
   int var1 = 'h';
   int var2 = '2';
    
   if( isdigit(var1) ) {
      printf("var1 = |%c| is a digit\n", var1 );
   } else {
      printf("var1 = |%c| is not a digit\n", var1 );
   }
   
   if( isdigit(var2) ) {
      printf("var2 = |%c| is a digit\n", var2 );
   } else {
      printf("var2 = |%c| is not a digit\n", var2 );
   }

   
   //   isgraph(int c) checks if the character has graphical representation.
   int var4 = '3';
   int var5 = 'm';
   int var6 = ' ';
    
   if( isgraph(var4) ) {
      printf("var4 = |%c| can be printed\n", var4 );
   } else {
      printf("var4 = |%c| can't be printed\n", var4 );
   }
   
   if( isgraph(var5) ) {
      printf("var5 = |%c| can be printed\n", var5 );
   } else {
      printf("var5 = |%c| can't be printed\n", var5 );
   }

   if( isgraph(var6) ) {
      printf("var6 = |%c| can be printed\n", var6 );
   } else {
      printf("var6 = |%c| can't be printed\n", var6 );
   }


   //   islower(int c) checks whether the passed character is a lowercase letter.
   int v1 = 'Q';
   int v2 = 'q';
   int v3 = '3';
    
   if( islower(v1) ) {
      printf("v1 = |%c| is lowercase character\n", v1 );
   } else {
      printf("v1 = |%c| is not lowercase character\n", v1 );
   }
   
   if( islower(v2) ) {
      printf("v2 = |%c| is lowercase character\n", v2 );
   } else {
      printf("v2 = |%c| is not lowercase character\n", v2 );
   }
   
   if( islower(v3) ) {
      printf("v3 = |%c| is lowercase character\n", v3 );
   } else {
      printf("v3 = |%c| is not lowercase character\n", v3 );
   }


   //   isprint(int c) checks whether the passed character is printable. A printable character is a character that is not a control character.
   int r1 = 'k';
   int r2 = '8';
   int r3 = '\t';
   int r4 = ' ';
    
   if( isprint(r1) ) {
      printf("r1 = |%c| can be printed\n", r1 );
   } else {
      printf("r1 = |%c| can't be printed\n", r1 );
   }
   
   if( isprint(r2) ) {
      printf("r2 = |%c| can be printed\n", r2 );
   } else {
      printf("r2 = |%c| can't be printed\n", r2 );
   }
   
   if( isprint(r3) ) {
      printf("r3 = |%c| can be printed\n", r3 );
   } else {
      printf("r3 = |%c| can't be printed\n", r3 );
   }
   
   if( isprint(r4) ) {
      printf("r4 = |%c| can be printed\n", r4 );
   } else {
      printf("r4 = |%c| can't be printed\n", r4 );
   }

   
   
   //   ispunct(int c) checks whether the passed character is a punctuation character.
   int a1 = 't';
   int a2 = '1';
   int a3 = '/';
   int a4 = ' ';

   if( ispunct(a1) ) {
      printf("a1 = |%c| is a punctuation character\n", a1 );
   } else {
      printf("a1 = |%c| is not a punctuation character\n", a1 );
   }
   
   if( ispunct(a2) ) {
      printf("a2 = |%c| is a punctuation character\n", a2 );
   } else {
      printf("a2 = |%c| is not a punctuation character\n", a2 );
   }
   
   if( ispunct(a3) ) {
      printf("a3 = |%c| is a punctuation character\n", a3 );
   } else {
      printf("a3 = |%c| is not a punctuation character\n", a3 );
   }
   
   if( ispunct(a4) ) {
      printf("a4 = |%c| is a punctuation character\n", a4 );
   } else {
      printf("a4 = |%c| is not a punctuation character\n", a4 );
   }


   //   isspace(char c) checks whether the passed character is white-space.
   int t1 = 't';
   int t2 = '1';
   int t3 = ' ';

   if( isspace(t1) ) {
      printf("t1 = |%c| is a white-space character\n", t1 );
   } else {
      printf("t1 = |%c| is not a white-space character\n", t1 );
   }
   
   if( isspace(t2) ) {
      printf("t2 = |%c| is a white-space character\n", t2 );
   } else {
      printf("t2 = |%c| is not a white-space character\n", t2 );
   }
   
   if( isspace(t3) ) {
      printf("t3 = |%c| is a white-space character\n", t3 );
   } else {
      printf("t3 = |%c| is not a white-space character\n", t3 );
   }


   //   isupper(int c) checks whether the passed character is uppercase letter.
   int d1 = 'M';
   int d2 = 'm';
   int d3 = '3';
    
   if( isupper(d1) ) {
      printf("d1 = |%c| is uppercase character\n", d1 );
   } else {
      printf("d1 = |%c| is not uppercase character\n", d1 );
   }
   
   if( isupper(d2) ) {
      printf("d2 = |%c| is uppercase character\n", d2 );
   } else {
      printf("d2 = |%c| is not uppercase character\n", d2 );
   }   
   
   if( isupper(d3) ) {
      printf("d3 = |%c| is uppercase character\n", d3 );
   } else {
      printf("d3 = |%c| is not uppercase character\n", d3 );
   }


   //   isxdigit(int c) checks whether the passed character is a hexadecimal digit.
   char u1[] = "tuts";
   char u2[] = "0xE";
  
   if( isxdigit(u1[0]) ) {
      printf("u1 = |%s| is hexadecimal character\n", u1 );
   } else {
      printf("u1 = |%s| is not hexadecimal character\n", u1 );
   }
   
   if( isxdigit(u2[0] )) {
      printf("u2 = |%s| is hexadecimal character\n", u2 );
   } else {
      printf("u2 = |%s| is not hexadecimal character\n", u2 );
   }
}  
