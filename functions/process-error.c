#include "../headers/process-error.h"

void process_error(int *command){
    int res = check_command_char(command);
    if ((int)res == 0){
        wprintf(L"Error: incorrect command character\n");
    }
}