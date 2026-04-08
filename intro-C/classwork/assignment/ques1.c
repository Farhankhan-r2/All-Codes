#include <stdio.h>
void oddOrEven();
int main()
{
  oddOrEven();
  return 0;
}

void oddOrEven()
{
  // CHECK WHETHER USER GIVEN NO. ODD OR EVEN
  int userInput;
  printf("\nEnter an integer: ");
  scanf("%d", &userInput);

  if (userInput % 2 == 0)
  {
    printf("\nThe number %d is even", userInput);
  }
  else
  {
    printf("\nThe number %d is odd", userInput);
  }
}