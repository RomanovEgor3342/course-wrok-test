#include "../headers/process-command.h"
int process_commands(){
    char command = get_option();
    switch (command)
    {
    case '0':
        give_initial_information();
        break;
    case '1':
        break;
    case '2':
        break;
    case '3':
        break;
    case '4':
        break;
    case '5':
        give_info_about_functions();
        break;
    
    default:
        break;
    }
}