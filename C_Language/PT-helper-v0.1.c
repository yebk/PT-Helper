#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
name: PT-helper-v0.1.c
version: 0.1
creator: noob-v2.0
*/

//main. ################################################################################################################################################################
void main() { //here runs the program.
  char choice;
  ver_display(); //outputs information about the program
  to_be_or_not_to_be(); //asks the user if he wants to run the program
  while (true) {
    if ((choice == 'q') || (choice == 'Q')){ //checks if the user wants to quit
      choice = 'y';
      system("cls");
      exit(0);
    }
    printf("what device you want to configurate?\nrouter/switch");
  }
}
//ver_display. ################################################################################################################################################################
int ver_display(){ //outputs information about the program
  char prog_name[10] = "PT-helper";
  char ver[10] = "0.1";
  char creator[10] = "noob-v2.0";
  printf("Welcome to %s\nVersion %s\nCreated by %s\n\n", prog_name,ver,creator);
  return(0);
}
//to_be_or_not_to_be. ################################################################################################################################################################
int to_be_or_not_to_be(){ //asks the user if he wants to run the program
  char choice;
  printf("This program will give you ready script to run in packet tracer, for router or switch.\nyou can if you agree to the terms below and run the program,\nyou can always type");
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
  return(0);
}
//instructions. ################################################################################################################################################################
int instructions(){ //explains the user how to use the program
  printf("\n");
}
