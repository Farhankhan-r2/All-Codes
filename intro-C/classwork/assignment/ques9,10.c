#include <stdio.h>
int main()
{
  int num;
  printf("Enter a num(0-10): ");
  scanf("%d", &num);
  if (num >= 0 && num < 5)
  {
    printf("The number lies between 0 to 4");
  }
  else if (num >= 5 && num <= 10)
  {
    printf("The number lies between 5 to 10");
  }
  else
  {
    printf("invalid");
  }
}