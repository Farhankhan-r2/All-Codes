#include <stdio.h>
int main()
{ /*
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", i);
  }
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", i);
  }
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", i);
  }*/
  /*
  for (int i = 1; i < 4; i++)
  {
    for (int i = 0; i < 10; i++)
    {
      printf("%d ", i);
    }
    printf("\n");
  }*/

  int rows = 0;
  int columns = 0;
  char symbol = '\0';

  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &columns);
  printf("Enter the symbol: ");
  scanf(" %c", &rows);

  for (int i = 0; i < rows; i++)
  {
    for (int i = 0; i < columns; i++)
    {
      printf("%c", &symbol);
    }
  }
  return 0;
}