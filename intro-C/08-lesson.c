#include <stdio.h>
#include <string.h>
int main()
{
  char name[50] = "";
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  if (strlen(name) == 0)
  {
    printf("please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    if (strlen(name) != 0)
    {
      printf("Your name is %s", name);
    }
    else
    {
      printf("fuck off, we dont care about ur name, ohh i forgot nobody cares lol");
    }
  }
  else
  {
    printf("Your name is %s", name);
  }

  return 0;
}