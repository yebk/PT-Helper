#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>
#include "Header_Files\\text_color.h"

//creating variables
const char switch_2960_interfaces[26][19] = {"fastEthernet0/1","fastEthernet0/2","fastEthernet0/3","fastEthernet0/4","fastEthernet0/5","fastEthernet0/6","fastEthernet0/7","fastEthernet0/8","fastEthernet0/9","fastEthernet0/10","fastEthernet0/11","fastEthernet0/12","fastEthernet0/13","fastEthernet0/14","fastEthernet0/15","fastEthernet0/16","fastEthernet0/17","fastEthernet0/18","fastEthernet0/19","fastEthernet0/20","fastEthernet0/21","fastEthernet0/22","fastEthernet0/23","fastEthernet0/24","gigabitEthernet0/1","gigabitEthernet0/2"};
const char go_to_conf_t[] = "enable\nconfigure terminal\n";
char choice;
int number_of_interfaces;

//##############################################################################################
char which_switch_device() { //asks what device to configure ("Switch-2960-24TT" or "Switch-PT-Empty")

    while (true) {
        system("cls");
        for (int i = 0; i < 40; i++) {
            printf("=");
        }
        set_color_text(11);
        printf("\n       PT-helper: which switch\n");
        reset_color_text();
        for (int i = 0; i < 40; i++) {
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


        for (int i = 0; i < 40; i++) {
            printf("=");
        }
        printf("\n> Select Option: ");
        choice = _getch();
        choice = tolower(choice);
        if (choice == '1' || choice == '2'){
            break;
        }
        else if (choice == 'q'){
            exit(0);
        }
        return (choice);
    }
}
//##############################################################################################
char device_switch_options() { //asks the user what he wants to configurate
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
        if (choice == '1' || choice == '2' || choice == '3' || choice == '5'){
            break;
        }
        else if (choice == 'q'){
            exit(0);
        }
    }
    return(choice);
}

//##############################################################################################
void check_file_exist_for_switch (char choice) { //check if commands file type text (.txt) for switch exist
    char file_name[128]="";
    if (choice == '1') {
        strncat(file_name,"switch_commands_for_Switch-2960-24TT.txt",50);
    }
    else if (choice == '2') {
        strncat(file_name,"switch_commands_for_Switch-PT-Empty.txt",50);
    }
    else {
        system("cls");
        printf("###ERROR###");
        system("pause");
        exit(1);
    }
    if( access( file_name, F_OK ) != -1 ) { // TRUE == file exists || FALSE == file doesn't exist
        while (true) {
            system("cls");
            for (int i = 0; i < 50; i++) {
                printf("=");
            }
            set_color_text(11);
            printf("\n    There is already a file by the namecls:\n");
            set_color_text(15);
            printf("    \"%s\"\n", file_name);
            reset_color_text();
            for (int i = 0; i < 50; i++) {
                printf("-");
            }
            set_color_text(15);
            printf("\n 1)");
            reset_color_text();
            printf(" Delete and create new one (Recommended)\n");

            set_color_text(15);
            printf(" 2)");
            reset_color_text();
            printf(" Work with the existing one (not working yet)\n");

            for (int i = 0; i < 50; i++) {
                printf("=");
            }
            printf("\n> Select Option: ");
            choice = _getch();
            choice = tolower(choice);
            if (choice == '1')
                printf;
            FILE *fsw;
            fsw = fopen(file_name, "a");
            fclose(fsw);
        }
    } else {
        printf("doesnt");
        system("pause");
        FILE *fsw;
        fsw = fopen (file_name, "w");
        fclose (fsw);
    }
}
//##############################################################################################
int device_switch_interfaces_2960_24TT() { //configuring the interfaces of Switch-2960-24TT

    char term;
    while (true) {
        system("cls");
        for (int i = 0; i < 44; i++) {
            printf("=");
        }
        set_color_text(11);
        printf("\n PT-helper: switch interfaces configuration\n");
        reset_color_text();
        for (int i = 0; i < 44; i++) {
            printf("-");
        }
        set_color_text(15);
        printf("\n How many interfaces you want to configurate? (1-24)\n");
        reset_color_text();
        for (int i = 0; i < 44; i++) {
            printf("=");
        }
        printf("\n> Select Option: ");
        if(scanf("%d%c", &number_of_interfaces, &term) != 2 || term != '\n' || 1 > number_of_interfaces > 24) {
            printf("failure\n");
        }
        else return(number_of_interfaces);
    }
}
