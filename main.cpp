
#include "headers/application.h"

int main() {
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    application ob_application;

    ob_application.build_tree_utilities();

    return ob_application.start_game();
}