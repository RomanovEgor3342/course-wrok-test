#include <locale.h>
#include "headers/give-initial-information.h"
#include "headers/process-command.h"


int main(){
    setlocale(LC_ALL, "Russian");
    give_initial_information();
    process_commands();
    return 0;
}

// cmd.exe /k cw.exe
// mingw32-make clear