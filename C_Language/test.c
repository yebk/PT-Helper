#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {
  char text1[] = "welcome back my friend!";
  char text2[] = "you now i love you";
  char text3[] = "i want to fly";
  int i;
  printf("%s: %20s: %20s:\n", text1, text2, text3);

  printf("%s: %20s: %20s:\n", text3, text1, text2);

}
