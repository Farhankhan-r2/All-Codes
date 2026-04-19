#include <stdio.h>
int main()
{
  char alpha;
  printf("\nEnter an alphabet from A to C\n");
  scanf("%c", &alpha);
  switch (alpha)
  {
  case 'a':
  case 'A':
    printf("Apple");
    break;
  case 'b':
  case 'B':
    printf("Baddest");
    break;
  case 'c':
  case 'C':
    printf("common");
    break;
  };
  return 0;
}