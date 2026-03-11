#include <stdio.h>
void inititiateOperations(float num1, float num2)
{
  float add = num1 + num2;
  printf("\nThe addition of the no. is :%.3f", add);
  float sub = num1 - num2;
  printf("\nThe subtraction of the no. is :%.3f", sub);
  float product = num1 * num2;
  printf("\nThe product of the no. is :%.3f", product);
  float division = num1 / num2;
  printf("\nThe dision of the no. is :%.3f", division);
}
int main()
{
  float a, b;
  printf("enter the value of a: ");
  scanf("%f", &a);
  printf("enter the value of a: ");
  scanf("%f", &b);

  printf("\n%f", a);
  printf("\n%f", b);
  inititiateOperations(a, b);
  return 0;
}