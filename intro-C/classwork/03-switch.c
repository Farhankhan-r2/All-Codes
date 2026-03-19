#include <stdio.h>
int main()
{
  // write a program for vowels using switch
  char vowel;
  printf("\nEnter a vowel: ");
  scanf("%c", &vowel);
  /*
  switch (vowel)
  {
  case 'A':
    printf("Apple");
    break;
  case 'E':
    printf("Backstab");
    break;
  case 'I':
    printf("Icecream");
    break;
  case 'O':
    printf("Oester");
  case 'U':
    printf("umbrella");
    break;
  default:
    printf("NOT A VOWEL");


    Think of a switch as a hallway and your code as flowing water. Each case is a door; when one opens, the water rushes in. You use a break like a dam to stop the water from leaking into the next room. But in the last room, you don't need a dam because there are no more doors for the water to flow through—it just stops on its own
  }
*/
  /*prof asked a question how can we deal if the user write a then? i think of using conditional operator but that cant be used
  switches so then i move thinking creating two function but that would be a hastle, so prof give us a efficient code that we could use*/

  switch (vowel)
  {
  case 'A':
  case 'a':
    printf("Apple");
    break;
  case 'E':
  case 'e':
    printf("Backstab");
    break;
  case 'I':
  case 'i':
    printf("Icecream");
    break;
  case 'O':
  case 'o':
    printf("Oester");
  case 'U':
  case 'u':
    printf("umbrella");
    break;
  default:
    printf("NOT A VOWEL");
    /*in this code we use switch feature that it execute all code when the condition is true until  and unless break  keyword is involved you should use this type of solution in case of checking*/
  }

  return 0;
}
