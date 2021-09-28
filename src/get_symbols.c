#include "header.h"

wchar_t get_symbols() {
	wchar_t symbols[] = {L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ"};
	return symbols[rand() % 33];
    //return rand() % 93 + 33;
}
