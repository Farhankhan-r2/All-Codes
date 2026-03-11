#include <stdio.h>
#include <string.h>
float initiateCalculation(float num1, float num2, char operatorName[30])
{
  float result = 0.0f;
  if (strcmp(operatorName, "Multiply") == 0 || strcmp(operatorName, "multiply") == 0)
  {
    result = num1 * num2;
  }
  else if (strcmp(operatorName, "divide") == 0 || strcmp(operatorName, "Divide") == 0)
  {
    result = num1 / num2;
  }
  else if (strcmp(operatorName, "addition") == 0 || strcmp(operatorName, "Addition") == 0)
  {
    result = num1 + num2;
  }
  else if (strcmp(operatorName, "subtraction") == 0 || strcmp(operatorName, "Subtraction") == 0)
  {
    result = num1 - num2;
  }
  else
  {
    printf("please check the spelling use either lower case or only first letter in uppercase");
  }
  return result;
}
int main()
{
  float num1 = 0.0f;
  float num2 = 0.0f;
  char inputBuffer = '\0';
  char operatorName[30] = "";
  printf("Enter the value: ");
  scanf("%f", &num1);
  scanf("%c", &inputBuffer);
  printf("Enter the second value: ");
  scanf("%f", &num2);
  scanf("%c", &inputBuffer);
  printf("Enter the operation you want to perform : ");
  fgets(operatorName, sizeof(operatorName), stdin);
  operatorName[strcspn(operatorName, "\n")] = '\0'; // much better safer
  // operatorName[strlen(operatorName) - 1] = '\0';

  float result = initiateCalculation(num1, num2, operatorName);
  printf("%.3f", result);

  return 0;
}