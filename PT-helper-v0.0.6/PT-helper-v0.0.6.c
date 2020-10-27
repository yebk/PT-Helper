#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
 #include "Header_Files\\switch_commands.h"
#include "Header_Files\\text_color.h"

// Calling The Functions
void delay(float number_of_seconds);
void print_PT_Helper_image();
char to_be_or_not_to_be();
char which_device();
char device_switch_which();
char device_switch_options();
// char device_switch_interfaces();

//Declring Variables
const char pt_helper_ascii_image[16][128]={"@@@@@@@   @@@@@@@             @@@  @@@  @@@@@@@@  @@@       @@@@@@@   @@@@@@@@  @@@@@@@","@@@@@@@@  @@@@@@@             @@@  @@@  @@@@@@@@  @@@       @@@@@@@@  @@@@@@@@  @@@@@@@@","@@!  @@@    @@!               @@!  @@@  @@!       @@!       @@!  @@@  @@!       @@!  @@@","!@!  @!@    !@!               !@!  @!@  !@!       !@!       !@!  @!@  !@!       !@!  @!@","@!@@!@!     @!!    @!@!@!@!@  @!@!@!@!  @!!!:!    @!!       @!@@!@!   @!!!:!    @!@!!@!","!!@!!!      !!!    !!!@!@!!!  !!!@!!!!  !!!!!:    !!!       !!@!!!    !!!!!:    !!@!@!","!!:         !!:               !!:  !!!  !!:       !!:       !!:       !!:       !!: :!!",":!:         :!:               :!:  !:!  :!:        :!:      :!:       :!:       :!:  !:!",":!:         :!:               :!:  !:!  :!:        :!:      :!:       :!:       :!:  !:!"," ::          ::               ::   :::   :: ::::   :: ::::   ::        :: ::::  ::   :::"," :           :                 :   : :  : :: ::   : :: : :   :        : :: ::    :   : :"};
char choice; //creates variable choice of type char

//##############################################################################################
int main() { //here runs the program
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    print_PT_Helper_image();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); //sets the color of text to bright green
    to_be_or_not_to_be(); //asks the user if he wants to run the program
    choice = which_device();
    if (choice == 's') {
        choice = device_switch_options();
        if (choice == '1') { // choice = device_switch_interfaces();

        }
    }
    else if (choice == 'r'){ // choice = device_router_junction();
    }else{
        printf("###ERROR###\n");
        exit(1);
    }
    return(0);
}
//##############################################################################################
void delay(float number_of_seconds) { // delays the process
    // Converting time into milli_seconds
    float milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
//##############################################################################################
void print_PT_Helper_image() { //prints the pt-helper ascii image
    char pth;
    int k=1;
    for (size_t i = 0; i < 11; i++) {

        for (size_t j = 0; j < 92; j++) {
            if (k==16) {k=1;}
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), k);
            k ++;
            pth = pt_helper_ascii_image[i][j];
            delay(0.001);
            printf("%c",pth );
        }
        printf("\n");
    }
    delay(1.75);
}
//##############################################################################################
char to_be_or_not_to_be() { //asks the user if he wants to run the program
  char prog_name[] = "PT-helper";
  char ver[] = "0.6";
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
//##############################################################################################
char which_device() {
  while (true) { // RUNS FOR EVER!!!          not really...
    system("cls");
    for (int i = 0;i < 40;i++) {
      printf("=");
    }
    set_color_text(11);
    printf("\n PT-helper: Which device to configurate\n");
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
//##############################################################################################
char device_switch_which(){
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
//##############################################################################################
char device_switch_options(){
  while (true) {
    system("cls");
    for (int i = 0;i < 40;i++) {
      printf("=");
    }
    set_color_text(11);
    printf("\n     PT-helper: switch configuration\n");
    reset_color_text();
    for (int i = 0;i < 40;i++) {
      printf("-");
    }
    set_color_text(15);
    printf("\n Q)");
    reset_color_text();
    printf(" Quit Program");

    set_color_text(15);
    printf("\t1) ");
    reset_color_text();
    printf(" Interfaces\n");


    set_color_text(15);
    printf(" 2)");
    reset_color_text();
    printf(" Vlan Database");

    set_color_text(15);
    printf("\t3) ");
    reset_color_text();
    printf(" Spanning Tree (STP)\n");

    set_color_text(15);
    printf(" 4)");
    reset_color_text();
    printf(" Port-Security");

    set_color_text(15);
    printf("\t5) ");
    reset_color_text();
    printf(" ERROR\n");


    for (int i = 0;i < 40;i++) {
      printf("=");
    }
    printf("\n> Select Option: ");
    choice = _getch();
    choice = tolower(choice);
    if (choice == '1'){
      break;
    }
    if (choice == '2'){
      break;
    }
    if (choice == '3'){
      break;
    }
    if (choice == '4'){
      break;
    }
    if (choice == '5'){
      break;
    }
    else if (choice == 'q'){
      exit(0);
    }
  }
  return(choice);
}
//##############################################################################################
// char device_switch_interfaces(){
//   int number_of_interfaces;
//   while (true) {
//     system("cls");
//     for (int i = 0;i < 44;i++) {
//       printf("=");
//     }
//     set_color_text(11);
//     printf("\n PT-helper: switch interfaces configuration\n");
//     reset_color_text();
//     for (int i = 0;i < 44;i++) {
//       printf("-");
//     }
//     set_color_text(15);
//     printf("\n Q)");
//     reset_color_text();
//     printf(" Quit Program\n");
//
//     printf(" How many interfaces you want to configurate? (1-24)\n");
//
//     for (int i = 0;i < 44;i++) {
//       printf("=");
//     }
//     printf("\n> Select Option: ");
//     getchar(choice);
//     if ( isalpha(choice) ){
//       choice = tolower(choice);
//     }
//
//
//     else if ((choice == 'q')(choice == 'Q')){
//       exit(0);
//   }
// }
