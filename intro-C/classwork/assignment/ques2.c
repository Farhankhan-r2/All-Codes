#include <stdio.h>
int main()
{
  char name[20];
  printf("Enter your name: ");
  scanf("%s", &name);
  fflush(stdin);
  printf("Your name is this LOL :)- %s", name);

  return 0;
}