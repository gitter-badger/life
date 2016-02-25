#include <ncurses.h>
#include <locale.h>
#include "mainmenu.h"

const int success = 0;

void prPrintMenuOptions() {
    printw("1. Новая игра.\n");
    printw("2. Загрузить игру.\n");
    printw("3. Настройки.\n");
    printw("4. Выход.\n");
}


int startMainMenu() {
    setlocale(LC_ALL, "");
    initscr();
    raw();
    noecho();
    prPrintMenuOptions();
    getch();
    endwin();
    return success;
}