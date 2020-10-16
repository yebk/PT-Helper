#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
name: PT-helper-v0.1.c
version: 0.1
creator: noob-v2.0
*/


//ver_display. ################################################################################################################################################################
int ver_display(){ //outputs information about the program.
  char prog_name[] = "PT-helper";
  char ver[] = "0.1";
  char creator[] = "noob-v2.0";
  printf("Welcome to %s\nVersion %s\nCreated by %s\n\n", prog_name,ver,creator);
  return(0);
}
//to_be_or_not_to_be. ################################################################################################################################################################
int to_be_or_not_to_be(){ //asks the user if he wants to run the program.
  char choice;
  printf("This program will give you a ready script to run in packet tracer, for router or switch.\nif you agree to the terms below the program will run.\n");
  printf("Run this program at your own risk m8.\ncontinue?\n(Y/N): ");
  scanf(" %c", &choice);
  while (true) {
    if ((choice == 'y') || (choice == 'Y')){
      choice = 'y';
      break;
    }
    else if ((choice == 'n') || (choice == 'N')){
      exit(0);
    }else{
      system("cls");
      printf("ERROR: You entered %c\n", choice);
      printf("Please check your input and type ONLY Y/N: ");
      scanf(" %c", &choice);
    }
  }
  system("cls");
  return(choice);
}
//instructions. ################################################################################################################################################################
int instructions(){ //explains the user how to use the program.
  printf("\n");
}
//main. ################################################################################################################################################################
void main() { //here runs the program.
  char choice;
  ver_display(); //outputs information about the program.
  choice = to_be_or_not_to_be(); //asks the user if he wants to run the program.
  while ((choice != 'q') || (choice != 'Q')) { //checks if the user wants to quit.
      choice = 'y';
      system("cls");
      printf("what device you want to configurate?\n1.router: r\t 2.switch: s");
    }
}
