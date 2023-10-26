/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char a[2];
    int hrs,min,sec;
    scanf("%d%d%d",&hrs,&min,&sec);
    scanf("%s",a);
    
   if(strcmp(a,"pm")==0);
   {
       hrs=hrs+12;
   }
   printf("%d:%d:%d",hrs,min,sec);
   
}
