#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h> //this header file include sleep function for windows
int main()
{
  // While loop & do-while loop(another variation of while loop)

  /*
    int number = 1;
    do
    {
      printf("Enter a number greater than zero: ");
      scanf("%d", &number);
    } while (number <= 0);
  */
  /*
   char name[40] = "";
   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
   name[strlen(name) - 1] = '\0';

   while (strlen(name) == 0)
   {
     printf("Name cannot be empty! Please enter your name: ");
     fgets(name, sizeof(name), stdin);
     name[strlen(name) - 1] = '\0';
   }
  */
  /*
 bool isRunning = true;
 char response = '\0';

 while (isRunning)
 {
   printf("You are playing a game\n");
   printf("Would you like to continue? (Y = yes N = no)");
   scanf(" %c", &response);

   if (response != "Y")
   {
     isRunning = false;
   }
 }

 printf("You have exit the game");*/

  // for loop

  for (int i = 0; i < 10; i++)
  {
    if (i == 4)
    {
      continue;
    }
    if (i == 7)
    {
      break;
    }
    Sleep(1000); // between each cycle our computer is going to sleep for 1000 milisec everytime
    printf("%d\n", i);
  }

  return 0;
}