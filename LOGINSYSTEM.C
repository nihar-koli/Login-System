//Program for Login Sysytem
//Created by Nihar Anant Koli

#include<stdio.h>
#include<conio.h>
void main()
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
   }while((int)str[i-1] != 13);
   str[i-1]='\0';
//     printf("\n\n Password is : %s",str);

   if((strcmp(str1, "admin") && strcmp(str2, "password") )== 0)
   {
      printf("\n\n Login Succesfull...");
   }
   else
   {
      printf("\n\n Try again...");
   }


   getch();

}
