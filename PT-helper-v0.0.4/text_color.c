#include <windows.h>

//##############################################################################################
void set_color_text(const int k) {
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), k);
}
//##############################################################################################
void reset_color_text() {
  SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
}
