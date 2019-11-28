//Program for Login Sysytem
//Created by Nihar Anant Koli

#include<stdio.h>
#include<conio.h>
int main()
{
  char str1[50],str2[50];
  int i=0;
      clrscr();
   printf("\n\nEnter Username : ");
   gets(str1);
   printf("\n\nEnter Password : ");
   do
   {
     str2[i] = getch();
     i++;
     printf("\b* ");
   }while((int)str2[i-1] != 13);
   str2[i-1]='\0';
  
   if((strcmp(str1, "admin") && strcmp(str2, "password") )== 0)
      printf("\n\n Login Succesfull...");
   else
      printf("\n\n Try again...");
  
   getch();
}
