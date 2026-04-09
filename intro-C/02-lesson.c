#include <stdio.h>
int main()
{
  // FORMAT SPECIFIER

  // width
  int num1 = 1;
  int num2 = 10;
  int num3 = 100;
  int num4 = -200;

  printf("%03d\n", num1); // here this 3 means the minimum no. to print and if we put 0 infront these empty spaces changes with 0
  printf("%-03d\n", num2);
  printf("%04d\n", num3);

  // there is also another feature which i think is gud for accounting if the no. is positive it will have + sign or vice versa

  printf("%+d\n", num1);
  printf("%+d\n", num4);

  float price1 = 19.99;
  float price2 = 1.50;
  float price3 = -100.00;

  printf("%010.1f\n", price1); // rounnd up
  printf("%+10.1f\n", price2);
  printf("%+.1f\n", price3);

  return 0;
}