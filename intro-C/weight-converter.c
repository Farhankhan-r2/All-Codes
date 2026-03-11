#include <stdio.h>
#include <math.h>
int main()
{ // the sir make this prog by taking int 1 or 2 tht represent kg and pounds  avoided  taking strcmp();
  // weight converter program
  float weight = 0;
  char unit[20] = "";
  char c = "";

  printf("Enter the weight: ");
  scanf("%f", &unit);
  scanf("%c", &c);

  printf("Enter the unit: ");
  fgets(unit, sizeof(unit), stdin);
  unit[strlen(unit) - 1] = '\0';

  if (strcmp(unit, "kilogram") == 0)
  {
    weight = weight * 2.20462;
    printf("The weight in pounds is: %.3f pounds", weight);
  }
  else if (strcmp(unit, "pounds") == 0)
  {
    weight = weight / 2.20462;
    printf("The weight in kilogram is: %.3f kg", weight);
  }
  else
  {
    printf("\nINSTRUCTIONS!!");
    printf("\nplease check if the unit is in lowercase");
    printf("\nplease don't write unit with weight");
  };

  return 0;
}