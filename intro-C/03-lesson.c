#include <stdio.h>
#include <string.h>

int main()
{
  /* arithmetic operators = + - * / % ++ --
  int x = 1;
  int y = 2;
  y += 5;
  int z = x+y;
  printf("%d",z);
  */

  // how to take input from a user
  int age = 0;
  float gpa = 0.0f;
  char grade = '\0';
  char name[40] = "";

  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your gpa: ");
  scanf("%f", &gpa);
  printf("Enter your grade: ");
  scanf(" %c", &grade);
  getchar();
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';
  // scanf("%s", &name); here we ran into a problem we cant write ou full name since scanf cant read empty spaces when empty space found it stop there and assign the first name to your name variable use fgets()

  // HERE SOMETHING IS HAPPENING THERE IS 2 NEW LINE CHARACTER \N ... \N THIS CAUSE AFTER THE LAST INPUT THE LAST ENTER REMAIN IN INPUT BUFFER WE HAVE TO REMOVE THAT FIRST NEW  LINE CHARACTER WE NEED THE HELP OF A HEADER FILE CALLED STRING.H
  printf("%s\n", name);
  printf("%d\n", age);
  printf("%.1f\n", gpa);
  printf("%c\n", grade);

  return 0;
}