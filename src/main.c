#include "header.h"

int main(int argc, char *argv[])  {
	setlocale(LC_ALL, "ru_RU.UTF-8");
    initscr();
	if (argc > 2) {
		mx_printerr("usage: ./matrix_rain [-s]\n");
	}
	else if (argc > 1) {
		if (mx_strlen(argv[1]) == 2 && argv[1][0] == '-' && argv[1][1] == 's') {
			matrix_rain();
		}	
		else {
			mx_printerr("usage: ./matrix_rain [-s]\n");
		}
	}	
	else {
		messages();
		matrix_rain();
	}

  	endwin();  
	return 0;
}
