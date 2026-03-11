#include <stdio.h>
#include <math.h>
int main()
{
  // temperature converter program
  float userInput = 0.0f;
  char unitInput[20] = "";
  char inputBuffer = "";

  printf("Enter the temperature: ");
  scanf("%f", &userInput);
  scanf("%c", &inputBuffer);
  printf("Enter the unit: ");
  fgets(unitInput, sizeof(unitInput), stdin);
  unitInput[strlen(unitInput) - 1] = '\0';

  if (strcmp(unitInput, "celcius") == 0)
  {
    userInput = (userInput * 9 / 5) + 32;
    printf("Temperature in farenhiet is: %.2f F", userInput);
  }
  else if (strcmp(unitInput, "farenhiet") == 0)
  {
    userInput = (userInput - 32) * 5 / 9;
    printf("Temperature in celcius is: %.2f C", userInput);
  }
  else
  {
    printf("\nINSTRUCTIONS!!!");
    printf("\nCheck the spelling of unit and the characters are in lower case ");
    printf("\nunits beside celcius and farenhiet is invalid");
  }
}