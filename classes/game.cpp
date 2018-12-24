//
// Created by Ильдар on 23.12.2018.
//

#include "../headers/game.h"
#include<cstdlib>
#include<ctime>
void game::set_username(string username) {
    this->username = username;
}

void game::set_lives(int lives) {
    this->lives = lives;
}

bool game::check_char(char susp) {
    int char_pos = full_string.find(susp);

    if (char_pos == -1) {
        lives--;
        return false;
    } else {
        full_string[char_pos] = '0';
        user_string[char_pos] = susp;

        return true;
    }
}

string game::get_user_string() {
    return this->user_string;
}

string game::get_full_string() {
    return this->full_string;
}

int game::get_lives() {
    return this->lives;
}

string game::get_username() {
    return this->username;
}

void game::load_strings() {
    this->strings = fileReader.get_strings();
}

void game::set_full_string() {
    srand(time(NULL));

    this->full_string = strings.at(rand() % 1000 + 1);

    for (int i = 0; i < full_string.length(); ++i) {
        this->user_string.push_back('?');
    }
}

bool game::end_game() {
    for (char i : user_string) {
        if (i == '?')
            return false;
    }

    return true;
}

