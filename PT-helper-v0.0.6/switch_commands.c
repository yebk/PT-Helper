#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>
#include "Header_Files\\text_color.h"

const char switch_2960_interfaces[26][19] = {"fastEthernet0/1","fastEthernet0/2","fastEthernet0/3","fastEthernet0/4","fastEthernet0/5","fastEthernet0/6","fastEthernet0/7","fastEthernet0/8","fastEthernet0/9","fastEthernet0/10","fastEthernet0/11","fastEthernet0/12","fastEthernet0/13","fastEthernet0/14","fastEthernet0/15","fastEthernet0/16","fastEthernet0/17","fastEthernet0/18","fastEthernet0/19","fastEthernet0/20","fastEthernet0/21","fastEthernet0/22","fastEthernet0/23","fastEthernet0/24","gigabitEthernet0/1","gigabitEthernet0/2"};
const char go_to_conf_t[] = "enable\nconfigure terminal\n";

// declaring functions
char starting();
// declaring variable
char choice;
//##############################################################################################
int main() {

}
//##############################################################################################
char starting() { //asks what device to configure ("2960-24TT" or "Switch-PT-Empty")

  while (true) {
    system("cls");
    for (int i = 0;i < 40;i++) {
      printf("=");
    }
    set_color_text(11);
    printf("\n       PT-helper: which switch\n");
    reset_color_text();
    for (int i = 0;i < 40;i++) {
      printf("-");
    }
    set_color_text(15);
    printf("\n Q)");
    reset_color_text();
    printf(" Quit Program");

    set_color_text(15);
    printf("\t1)");
    reset_color_text();
    printf(" 2960-24TT\n");


    set_color_text(15);
    printf(" 2)");
    reset_color_text();
    printf(" Switch-PT-Empty\n");


    for (int i = 0;i < 40;i++) {
      printf("=");
    }
    printf("\n> Select Option: ");
    choice = _getch();
    choice = tolower(choice);
  }
  return(choice);
}
