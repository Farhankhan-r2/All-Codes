#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  // pseudo-random
  srand(time(NULL));
  // int randomNumber = rand() % 2;
  // int randomNumber = (rand() % 2) + 1;
  int min = 50;
  int max = 100;
  int randomNumber1 = (rand() % (max - min + 1)) + min;
  int randomNumber2 = (rand() % (max - min + 1)) + min;
  int randomNumber3 = (rand() % (max - min + 1)) + min;
  printf("%d %d %d", randomNumber1, randomNumber2, randomNumber3);

  return 0;
}