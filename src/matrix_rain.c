#include "header.h"

void matrix_rain() {
    color();
    int x = 0;
    int y = 0;
    getmaxyx(stdscr, y, x);
    int len[x];
    int first[x];
    int mass[x];
    
    for (int i = 0; i < x; i++) {
        len[i] = rand() % 50  - 1;
        first[i] = -1 * (rand() % 80);
        mass[i] = first[i];
    }

    int sym_color = 1;
    int SPEED = 100;
    while (1) {
        for (int i = 0; i < x; i++) {
            wchar_t r_char = get_symbols();
            if (i % 2 == 0) {
                r_char = ' ';
            }
            attron(COLOR_PAIR(2));
            mvprintw(mass[i] + 1, i, "%lc", r_char);
            attron(COLOR_PAIR(sym_color));
            mvprintw(mass[i], i, "%lc", r_char);
            mvprintw(mass[i] - len[i], i, "%c", ' ');
            if (mass[i] - len[i] > y) {
                mass[i] = first[i];
            }
            mass[i]++;
        }

        usleep(1000 * SPEED);
        nodelay(stdscr, TRUE);
        noecho();
        char sym = getch();
        if (sym == 'q') {
			clear();
			break;
		}
        switch (sym) {
            case '+':
                if (SPEED > 10) {
                    SPEED -= 10;
                }
                break;
            case '-':
                if (SPEED < 180) {
                    SPEED += 10;
                }
                break;
            case '0': sym_color = 1; break;
            case '1': sym_color = 2; break;
            case '2': sym_color = 3; break;
            case '3': sym_color = 4; break;
            case '4': sym_color = 5; break;
            case '5': sym_color = 6; break;
            case '6': sym_color = 7; break;
            case '7': sym_color = 8; break;
        }
        refresh();
    }
}
