#include <stdio.h>
int main()
{
  int array[] = {4, 2, 5, 1, 3};
  printf("\nunsorted array: %d", array);
  // sort this array using bubble sort algoritham(in this method we use  a variable and compare each value)
  //  formula no. of element = n soo n-1 passes would be created

  int i, temp;
  for (i = 1; i < 5; i++)
  {
    for (i = 1; i <= 5; i++)
    {
      if (array[i - 1] > array[i])
      {
        temp = array[i - 1];
        array[i - 1] = array[i];
        array[i] = temp;
      }
    }
  }
  printf("\nsorted array: %d", array);

  return 0;
}