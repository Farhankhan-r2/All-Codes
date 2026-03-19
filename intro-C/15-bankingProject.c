#include <stdio.h>
void balance(float paraAmount);
float deposite();
float withdraw();
void exit();

int main()
{
  float amount = 0.0;
  int userInput;
  balance(amount);
  printf("\nSelect an option\n\n1. check balance\n2. Deposite money\n3. Withdraw money\n4. Exit\n");
  scanf("%d", &userInput);
  if (userInput == 1)
  {
    balance(amount);
  }
  else if (userInput == 2)
  {
    printf("\nPrevious account balance: $%.2f", amount);
    amount += deposite();
    printf("\npresent account balance: $%.2f", amount);
  }
  else if (userInput == 3)
  {
    printf("\nPrevious account balance: $%.2f", amount);
    amount -= withdraw();
    printf("\npresent account balance: $%.2f", amount);
  }
  else if (userInput == 4)
  {
    exit();
  };

  return 0;
}
void balance(float paraAmount)
{
  printf("\nThe current amount is: $%.2f", paraAmount);
};
float deposite()
{
  float add;
  printf("\nEnter the amount u want to deposite: $");
  scanf("%f", &add);
  return add;
};
float withdraw()
{
  float sub;
  printf("\nEnter the amount u want u want to withdraw: $");
  scanf("%f", &sub);
  return sub;
};
void exit()
{
  printf("\nThankyou for coming here , please come again");
};