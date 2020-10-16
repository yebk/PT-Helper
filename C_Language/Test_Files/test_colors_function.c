#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int printf_colored(char *color,char *text){
  for(size_t i = 0; i < strlen(color); i++){
    color[i] = tolower(color[i]);

  }
  if (color == "a"){
    printf("\033[0;31m%s\x1b[0m\n",text);
  }
  else if (color == "red"){
    printf("\x1b[0;31m%s\x1b[0m\n", text);
  }
  else if (color == "green"){
    printf("\x1b[0;32m%s\x1b[0m\n", text);
  }
  else if (color == "yellow"){
    printf("\x1b[0;33m%s\x1b[0m\n", text);
  }
  else if (color == "blue"){
    printf("\x1b[0;34m%s\x1b[0m\n", text);
  }
  else if (color == "magenta"){
    printf("\x1b[0;35m%s\x1b[0m\n", text);
  }
  else if (color == "cyan"){
    printf("\x1b[0;36m%s\x1b[0m\n", text);
  }else{printf("\033[0;36m %s\x1b[0m \n ", text);}
}

// void function(char *color) {
//   printf("%s\n", color);
//   for (size_t i = 0; i < strlen(color); i++) {
//     printf("color[%i] = %c\n", i, color[i]);
//   }
//   printf("%s\n", color);
//   for (size_t i = 0; i < strlen(color); i++) {
//     color[i] = tolower(color[i]);
//   }
//   printf("%s\n", color);
//   for (size_t i = 0; i < strlen(color); i++) {
//     printf("color[%i] = %c\n", i, color[i]);
//   }
//   printf("%s\n", color);
// }
void main() {
  char color[] = "a";
  char text[] = "hello world!";
  printf(RED"%s\n"RESET,text );
  printf_colored(color,text);

}
