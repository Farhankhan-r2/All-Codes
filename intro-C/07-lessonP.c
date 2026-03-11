#include <stdio.h>
#include <math.h>
int main()
{
  /* program to calculate area , surface area and volume
  float radius = 0.0f;
  printf("Enter the radius");
  scanf("%f", &radius);
  float area = 3.14 * pow(radius, 2);
  printf("\nThe area of circle is %.2f", area);
  float surfaceArea = 4 * 3.14 * pow(radius, 2);
  printf("\nThe surface area of sphere is %.2f", surfaceArea);
  float volume = 4 / 3 * 3.14 * pow(radius, 3);
  printf("\nThe volume of sphere is %.2f", volume);
  */

  // compound interest calculator
  // A = p(1 + r/n)^nt
  float principalInDollars = 0;
  printf("\nEnter the principl amount: $");
  scanf("%f", &principalInDollars);

  float interestRate = 0;
  printf("\nEnter the interest each year: ");
  scanf("%f", &interestRate);
  interestRate = interestRate / 100;

  float interestCompounded = 0;
  printf("\nEnter the number of times the interest is compunded ech year: ");
  scanf("%f", &interestCompounded);

  float time = 0;
  printf("\nEnter for how long(years) you invested: ");
  scanf("%f", &time);

  float nXt = time * interestCompounded;
  float rIn = interestRate / interestCompounded;

  float totalAmount = principalInDollars * (pow(1 + rIn, nXt));
  printf("The total amount is %.2f", totalAmount);

  return 0;
}