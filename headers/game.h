//
// Created by Ильдар on 23.12.2018.
//

#ifndef UNTITLED2_GAME_H
#define UNTITLED2_GAME_H

#include <windows.h>
#include "base.h"
#include "file_reader.h"

class game : public base {
public:
    void load_strings();

    bool check_char(char susp);

    void set_username(string username);

    string get_username();

    void set_lives(int lives);

    int get_lives();

    string get_user_string();

    string get_full_string();

    string get_conceived_string();

    void set_full_string();

    bool end_game();

private:
    int lives = 8;

    vector<string> strings;

    string conceived_string;

    string full_string;

    string user_string;

    file_reader fileReader;

    string username;
};


#endif //UNTITLED2_GAME_H
