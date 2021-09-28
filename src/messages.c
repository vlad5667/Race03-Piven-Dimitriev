#include "header.h"

void messages() {
    initscr();
    color();
    char *first_message = "Wake up , Neo..";
    char *second_message = "The Matrix has you..";
    char *third_message = "Follow the white rabbit";
    char *fourth_message = "Knock, knock, Neo";
    refresh();
    for (int i = 0; i < mx_strlen(first_message); i++) {        
        mvaddch(5, i + 4, first_message[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(170000);
    clear();
    refresh();
    for (int i = 0; i < mx_strlen(second_message); i++) {
        mvaddch(5, i + 4, second_message[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(170000);
    clear();
    refresh();
    for (int i = 0; i < mx_strlen(third_message); i++) {      
        mvaddch(5, i + 4, third_message[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(170000);
    clear();
    refresh();
    for (int i = 0; i < mx_strlen(fourth_message); i++) {      
        mvaddch(5, i + 4, fourth_message[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(170000);
    clear();
    refresh();
    endwin();
}
