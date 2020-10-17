#include <stdio.h>
#include <stdlib.h>
#include "text_color.h"

// //set_color_text. ##############################################################################################
// void set_color_text(const int k) {
//   SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), k);
// }
// //reset_color_text. ##############################################################################################
// void reset_color_text() {
// SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
// }


void main()
{
	for(int i = 0; i < 256; ++i)
	{
    set_color_text(i);
		printf("This is text\n");
	}
}
