#include <stdio.h>
int main()
{

  int num1, num2;
  char operator;
  printf("Enter int num1: ");
  scanf("%d", &num1);
  printf("\nEnter int num2: ");
  scanf("%d", &num2);
  fflush(stdin);
  printf("Enter operator(+ or -): ");
  scanf("%c", &operator);

  if (operator == '+')
  {
    printf("The sum is %d", num1 + num2);
  }
  else
  {
    printf("The difference is %d", num1 - num2);
  };
  return 0;
}