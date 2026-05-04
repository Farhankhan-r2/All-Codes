#include <stdio.h>
int main()
{
  int size;
  printf("\n Enter the size of the array: ");
  scanf("%d", &size);
  int i, array[size];
  for (i = 0; i < size; i++)
  {
    printf("Enter the element of array[%d]: ", i);
    scanf("%d", &array[i]);
  };
  /*
                                               ****LINEAR SEARCH****
    int num;
    printf("\n Enter the (int)number u want to search in array: ");
    scanf("%d", &num);
    for (i = 0; i < size; i++)
    {
      if (array[i] == num)
      {
        printf("%d the number has been found on array[%d]", num, i);
        break;
      }
      else if (i == size - 1)
      {
        printf("%d the number has not been found on array", num);
      }
    };

    */

  int num;
  printf("\n Enter the (int)number u want to search in array: ");
  scanf("%d", &num);
  int first = 0, last = size - 1, middle;
  while (first <= last)
  {
    middle = (first + last) / 2;
    if (array[middle] < num)
      first = middle + 1;
    else if (array[middle] == num)
    {
      printf("%d the number has been found on array[%d]", num, middle);
      break;
    }
    else
      last = middle - 1;
  }
  if (first > last)
  {
    printf("\n the number has not found");
  }
}