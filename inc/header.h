#ifndef HEADER_H
#define HEADER_H

#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ncurses.h>
#include <unistd.h>

void messages();
int mx_strlen(const char *);
void color();
void matrix_rain();
void mx_printerr();
wchar_t get_symbols();

#endif
