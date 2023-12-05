#include "../../headers/check-command-character.h"
#include <wchar.h>
int check_command_char(int *command){
    int is_command_a_coorect_number = (-1< *command && *command<6) ? 1 : 0;
    return is_command_a_coorect_number;
}