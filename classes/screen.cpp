//
// Created by eltgm on 23.12.2018.
//

#include "../headers/screen.h"

string screen::get_current_state() {
    return this->current_state;
}

void screen::update_state(string username, string user_str, int lives) {
    char buffer[100];

    for (char &i : buffer) {
        i = '\0';
    }

    printf("\n\nИгрок - %s; Жизней - %d\n"
           "----------%s----------\n\n", username.c_str(), lives, user_str.c_str());
    string st(buffer);

    cout << buffer;
    this->current_state = st;
}

