#include <stdio.h>
void visual(char knightSay[200], char studentSay[50], char kingSay[200])
{
  printf(" ____________________________________________________________________________________\n");
  printf("|                                                                                    |\n");
  printf("|                                                       {%s}                         |\n", kingSay);
  printf("|   {%s}                                                /                            |\n", knightSay);
  printf("|   /                                              |   O      |                      |\n");
  printf("|  O        {%s}                                   |  /|\\\\  |                      |\n", studentSay);
  printf("| /|\\\\      /                                    |  / \\\\  |                      |\n");
  printf("| / \\\\  >-+O                                     ___________                       |\n");
  printf("|                                                 ---------------                    |\n");
  printf("|                                                                                    |\n");
  printf("|_____________________________________________________________________________________|\n");
}
int main()
{
  int decision;
  char knightSay[200] = "Lord this men is accused of not completing the assignment at time";
  printf("%s", knightSay);
  printf("\n|*GIVE UR DECISION AS KING*|");
  printf("\nYour options are \n 1-Bring his head \n 2-Deduct 40 marks \n 3-Give zero in his finals");
  scanf("%d", &decision);
  if (decision == 1)
  {
    visual(knightSay, "just for the assign wtf", "bring his head");
  }
  else if (decision == 2)
  {
    visual(knightSay, "why tf", "deduct 40 marks");
  }
  else if (decision == 3)
  {
    visual(knightSay, "please nooooo", "give zero in his finals");
  }
  else
  {
    printf("invalid choice");
  }
  return 0;
}