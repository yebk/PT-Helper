#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
#include <conio.h>

//set_color_text. ##############################################################################################
void set_color_text(const int k){ //sets the color of text
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), k);
}
//reset_color_text. ##############################################################################################
void reset_color_text(){ //resets the color of text
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
}
//to_be_or_not_to_be. ##############################################################################################
char to_be_or_not_to_be() { //asks the user if he wants to run the program
  char choice;
  char prog_name[] = "PT-helper";
  char ver[] = "0.2";
  char creator[] = "noob-v2.0";
  while (true) {
    system("cls");
    printf("\n   %s\n   Version %s\n   Created by %s\n\n", prog_name, ver, creator);
    for (int i = 0;i < 45;i++) {
      printf("=");
    }
    printf("\n This program will give you a ready script\n to run in packet tracer with commands\n for router or switch.\n\n");
    set_color_text(4);
    printf(" WARNING: THIS PROGRAM MAY BREAK YOU COMPUTER\n\n");
    reset_color_text();
    printf(" run this program at your own risk.\n");
    for (int i = 0;i < 45;i++) {
      printf("-");
    }
    set_color_text(8);
    printf("\n Do You want to continue? ");
    set_color_text(15);
    printf("(Y/N)\n");
    reset_color_text();
    for (int i = 0;i < 45;i++) {
      printf("=");
    }
    printf("\n> Select Option: ");
    choice = _getch();
    choice = tolower(choice);
    if (choice == 'y') {
      break;
    }
    else if (choice == 'n') {
      exit(0);
    }
  }

  return(choice);
}
//which_device. ##############################################################################################
char which_device() {
  char choice = 'y';
  while (true) { //checks if the user wants to quit
    char choice = 'y';
    system("cls");
    for (int i = 0;i < 40;i++) {
      printf("=");
    }
    set_color_text(11);
    printf("\n  Which device you want to configurate:\n");
    reset_color_text();
    for (int i = 0;i < 40;i++) {
      printf("-");
    }
    set_color_text(15);
    printf("\n R)");
    reset_color_text();
    printf(" Router");
    set_color_text(15);
    printf("\t\tS) ");
    reset_color_text();
    printf("Switch\n");
    for (int i = 0;i < 40;i++) {
      printf("=");
    }
    printf("\n> Select Option: ");
    choice = _getch();
    choice = tolower(choice);
    if ((choice == 'r') || (choice == 's')){
      break;
    }
    if (choice == 'q'){
      exit(0);
    }
  }
  return(choice);
}
//device_switch. ##############################################################################################
void device_switch(){

}
//device_router. ##############################################################################################
void device_router(){

}
//main. ##############################################################################################
int main() { //here runs the program
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); //sets the color of text to bright green
  char choice; //creates variable choice of type char
  to_be_or_not_to_be(); //asks the user if he wants to run the program
  choice = which_device();
  if (choice == 's') {
    device_switch();
  }
  if (choice == 's'){
    device_router();
  }
  return(0);
}
