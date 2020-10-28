#ifndef __SWITCH_COMMANDS_H_
#define __SWITCH_COMMANDS_H_

char which_switch_device(); //asks what device to configure ("2960-24TT" or "Switch-PT-Empty")
char device_switch_options(); //asks the user what he wants to configurate
void check_file_exist_for_switch(); //check if commands file type text (.txt) for switch exist
char device_switch_interfaces_2960_24TT(); //configuring the interfaces of Switch-2960-24TT

#endif
