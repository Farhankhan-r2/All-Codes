#include <stdio.h>
#include <stdbool.h>
int main(){
    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    // int    = whole numbers (4 bytes in modern systems)
    // float  = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char   = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool   = true or false (1 byte, requires <stdbool.h>)



  /*
  printf("i like watermelon");
  int age = 20;
  int year = 2026;
  float gpa = 9.5;
  double pi = 3.14141414141141;
  printf("\nyour age is %d years old", age);
  printf("\nthe year  is %d ", year);
  printf("\nyour gpa is %.1f", gpa);
  printf("\ninstead of float for more precision %.15lf", pi);
  */
  char grade = 'A';
  printf("your grade is %c\n", grade);

  //since c doesnt have strings we array with char

  char name[] = "god of war";
  printf("hellow %s",name);

  bool isOnline = true;
  printf("%d", isOnline);


  return 0;
}