#include "../headers/read-text.h"

wchar_t **read_text(int *amount_of_sentences){
    setlocale(LC_ALL, "");
    wchar_t **text;
    int capacity = 1, index_of_char=0;
    text = malloc(sizeof(wchar_t*));
    text[*amount_of_sentences] = malloc(sizeof(wchar_t));
    wchar_t ch = getwchar();
    int end_of_text_flag = 0, end_of_sentence = 0;
    (*amount_of_sentences)++;
    while(1){
        ch = getwchar();
        if (ch == L'\n'){
            if (end_of_text_flag){
                if (!end_of_sentence){
                    wprintf(L"Error: <Введите току в конце последнего предложения, предложение не было считано>\n");
                }
                break;
            }
            else{
                
                end_of_text_flag = 1;
            }
            continue;
        }

        else{
            end_of_text_flag = 0;
        }
        end_of_sentence = 0;
        if ((ch == L' ' || ch == L'\t') && index_of_char == 0){
            continue;
        }
        if (index_of_char >= (capacity-1)){
            capacity*=2;
            text[*amount_of_sentences] = realloc(text[*amount_of_sentences], sizeof(wchar_t)*capacity);
        }
        if (ch == L'.'){
            text[*amount_of_sentences][index_of_char] = ch;
            text[*amount_of_sentences][index_of_char+1] = L'\0';
            (*amount_of_sentences)++;
            index_of_char = 0;
            capacity = 1;
            end_of_sentence = 1;
            text = realloc(text, sizeof(wchar_t*)*((*amount_of_sentences)+1));
            text[*amount_of_sentences] = malloc(sizeof(wchar_t));
            continue;
        }
        text[*amount_of_sentences][index_of_char] = ch;
        index_of_char++;
    }

    return text;
}

