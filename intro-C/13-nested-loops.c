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
  }

  // print 1, 12 , 123 till 12345 came using nested loops
  for (int i = 1; i <= 5; i++)
  {
    for (int k = 6; k > i; k--)
    {
      printf(" * ");
    };
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    };
    printf("\n");
  };
*/
  int i, j, k;

  for (i = 1; i <= 5; i++)
  {
    for (j = 5; j >= i; j--)
    {
      printf("*");
    }
    for (k = 1; k <= i; k++)
    {
      printf("%d", k);
    }
    printf("\n");
  }
  return 0;
}