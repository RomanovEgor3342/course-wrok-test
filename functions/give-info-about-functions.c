#include "../headers/give-info-about-functions.h"

void give_info_about_functions(){
    wprintf(L"Введите \"0\" для того чтобы распечатеть каждое слово которое встречается не более одного раза в тексте.\nВведите \"1\", чтобы каждую подстроку в тексте имеющую вид “<день> <месяц> <год> г.” заменить на подстроку вида “ДД/ММ/ГГГГ”.\nВведите \"2\", чтобы отсортировать предложения по произведению длин слов в предложении.\nВведите \"4\", чтобы удалить все предложения, которые содержат символ \"#\" или \"№\", но не содержат ни одной цифры.\n");
}