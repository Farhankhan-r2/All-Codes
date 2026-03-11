#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int generateRandomMove();
int takeUserInput();
int giveResult();

int main()
{
  srand(time(NULL));

  int winningNum = giveResult();
  if (winningNum == 0)
  {
    printf("\nTIE\n");
  }
  else if (winningNum == 1)
  {
    printf("\nYou win\n");
  }
  else if (winningNum == 2)
  {
    printf("\nYou lose better luck next time\n");
  }
}

int generateRandomMove()
{
  return rand() % 3;
}

int takeUserInput()
{
  char userInput[20];
  do
  {

    if (fgets(userInput, sizeof(userInput), stdin))
    {
      printf("ENTER rock/paper/scissors");
      // This removes BOTH \n and \r (essential for cross-platform)
      userInput[strcspn(userInput, "\r\n")] = '\0';
    }

    while (strcmp(userInput, "rock") != 0 && strcmp(userInput, "paper") != 0 && strcmp(userInput, "scissors") != 0)
      ;
  }

  if (strcmp(userInput, "rock") == 0)
    return 0;

  else if (strcmp(userInput, "paper") == 0)
    return 1;

  return 2;
}

int giveResult()
{
  int computerMove = generateRandomMove();
  int userMove = takeUserInput();
  if (computerMove == userMove)
  {
    return 0;
  }
  if (userMove == 0)
  {
    if (computerMove == 1)
    {
      return 2;
    }
    else if (computerMove == 2)
    {
      return 1;
    }
  }
  else if (userMove == 1)
  {
    if (computerMove == 0)
    {
      return 1;
    }
    else if (computerMove == 2)
    {
      return 2;
    }
  }
  else if (userMove == 2)
  {
    if (computerMove == 0)
    {
      return 2;
    }
    else if (computerMove == 1)
    {
      return 1;
    }
  }
  else
  {
    return 01235147;
  }
}
