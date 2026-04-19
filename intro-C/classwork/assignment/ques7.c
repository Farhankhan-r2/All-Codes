#include <stdio.h>
int main()
{
  int num;
  do
  {
    printf("enter the 0 to exit the loop: ");
    scanf("%d", &num);
  } while (num != 0);

  return 0;
}