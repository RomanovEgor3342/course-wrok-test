#include "../headers/process-command.h"
int process_commands(){
    int command = get_option();
    if (!check_command_char(&command)){
        wprintf(L"Error: <Неверный номер команды, команда задаётся числом в диапозоне от 0 до 5>\n");
        return 0;
    }
    if (command == 5){
        give_info_about_functions();
        return 0;
    }
    // Первичное чтение текста
    int amount_of_sentences = 0;
    wchar_t **readed_text = read_text(&amount_of_sentences);

    // Помещение текста в структуры
    struct Text text = {malloc(sizeof(struct Sentence)*amount_of_sentences), amount_of_sentences};
    for (int i=0;i<amount_of_sentences;i++){
        struct Sentence sentence;
        sentence.sentence = readed_text[i];
        sentence.quantity_of_symbols = wcslen(readed_text[i]);
        text.sentences[i] = sentence;
    }
    switch ((int)command){
        case 0:
            output_reworked_text(text);
            break;
        case 1:
            // wprintf(L"sfsdf");
            output(text);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            break;
    }
}