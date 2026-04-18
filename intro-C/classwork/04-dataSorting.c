#include <stdio.h>
int main()
{
  int i, temp, pass;

  int array[] = {4, 2, 5, 1, 3};
  printf("\n");
  printf("\nunsorted array: ");

  for (i = 0; i < 5; i++)
  {
    printf("%d", array[i]);
  };
  // sort this array using bubble sort algoritham(in this method we use  a variable and compare each value)
  //  formula no. of element = n soo n-1 passes would be created

  /*
  this code was correct but each time it is doing unneccessary computation what i mean is that in each pass the order of numbers get corrected so we dont have  to use comparison each time from first to last
   for (pass = 1; pass < 5; pass++)
  {
    for (i = 1; i <= 5; i++)
    {
      if (array[i - 1] > array[i])
      {
        temp = array[i - 1];
        array[i - 1] = array[i];
        array[i] = temp;
      };
    };
  };

  */

  for (pass = 0; pass < 4; pass++)
  {
    for (i = 1; i <= 5 - pass; i++)
    {
      if (array[i - 1] > array[i])
      {
        temp = array[i - 1];
        array[i - 1] = array[i];
        array[i] = temp;
      };
    };
    printf("\n");
    printf("\nsorted array: ");
    for (i = 0; i < 5; i++)
    {
      printf("%d", array[i]);
    };
  };

  printf("\n");
  printf("\nsorted array: ");
  for (i = 0; i < 5; i++)
  {
    printf("%d", array[i]);
  };
  return 0;
}