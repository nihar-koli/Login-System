//Program for Login Sysytem

#include<stdio.h>
#include<conio.h>
void main()
{
  char str[50];
  int i=0;
      clrscr();
   printf("\n\n Password : ");
   do
   {
     str[i] = getch();
     i++;
     printf("\b* ");
   }while((int)str[i-1] != 13);
   str[i-1]='\0';
     printf("\n\n Password is : %s",str);

   if(strcmp(str, "password") == 0)
   {
      printf("\n\n succesfull...");
   }
   else
   {
      printf("\n\n Try again...");
   }


   getch();

}
