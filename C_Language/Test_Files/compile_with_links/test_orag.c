#include <stdio.h>
#include <stdlib.h>
#include "text_color.h"

int main() {
  set_color_text(5);
  printf("this is a text with color\n");
  reset_color_text();
  printf("this is a text\n");
  getchar();
  return 0;
}
