#include <stdio.h>
int main()
{
  float price = 100.00;
  char forDiscount[5] = "";
  char inputBuffer;
  printf("Do you want to check discount options!!!");
  printf("\nType yes and no: ");
  fgets(forDiscount, sizeof(forDiscount), stdin);
  forDiscount[strlen(forDiscount) - 1] = '\0';

  if (strcmp(forDiscount, "yes") == 0)
  {
    int discountCategory = 0;
    printf("\n we offer three types of discount: ");
    printf("\n 1.For students 2.For Professors 3.For student and faculty(guest prof)");
    printf("\nType the no. in the category you are in(1-3): ");
    scanf("%d", &discountCategory);
    scanf("%c", &inputBuffer);
    if (discountCategory == 1)
    {
      printf("\nGood news you are eligible for whopping 10 percent discount");
      price = price - (10 * price / 100);
      printf("\nYour total will be : %.2f", price);
    }
    else if (discountCategory == 2)
    {
      printf("\nGood news you are eligible for whopping 20 percent discount");
      price = price - (20 * price / 100);
      printf("\nYour total will be : %.2f", price);
    }
    else if (discountCategory == 3)
    {
      printf("\nGood news you are eligible for whopping 30 percent discount");
      price = price - (30 * price / 100);
      printf("\nYour total will be : %.2f", price);
    }
  }
  else
  {
    printf("please proceed with payment either cash or card");
  }
}