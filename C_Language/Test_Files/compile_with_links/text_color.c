#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//set_color_text. ##############################################################################################
void set_color_text(const int k) {
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), k);
}
//reset_color_text. ##############################################################################################
void reset_color_text() {
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
}
