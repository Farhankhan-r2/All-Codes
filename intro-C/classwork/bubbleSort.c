#include <stdio.h>
int main()
{
  int i, size, num, c, temp;
  printf("\n Enter the size of array: ");
  scanf("%d", &size);
  int array[size];
  for (i = 0; i < size; i++)
  {
    printf("\n Enter the element of array: ");
    scanf("%d", &array[i]);
  }
  for (i = 0; i < size; i++)
  {
    printf("%d", array[i]);
  }

  for (i = 0; i < size; i++)
  {
    for (c = 1; c <= size; c++)
    {
      if (array[c - 1] > array[c])
      {
        // put
        temp = array[c - 1];
        array[c - 1] = array[c];
        array[c] = temp;
      }
    }
  }
  for (i = 0; i < size; i++)
  {
    printf("%d", array[i]);
  }

  return 0;
}