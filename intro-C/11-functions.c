#include <stdio.h>
/*since code read top to bottom if we didnt gave info of function and just write it below int main() function the problem that occurs is that computer will read ur main code then said this function is not defined since the function is in bottom thats why we gave if half info above so that it knows that the function exist just defining it later */

int nameFunction(char name[30]); // function prototype

int main()
{
  char name[30] = "";
  printf("Enter your name: ");
  scanf("%s", &name);
  nameFunction(name);

  return 0;
}

int nameFunction(char name[30])
{
  printf("Hey my name is %s", name);
  return 0;
}
