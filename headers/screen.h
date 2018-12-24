//
// Created by Ильдар on 23.12.2018.
//

#ifndef UNTITLED2_SCREEN_UPDATER_H
#define UNTITLED2_SCREEN_UPDATER_H


#include "base.h"


class screen : public base {
public:
    string get_current_state();

    void update_state(string username, string user_str, int lives);

private:
    string current_state;
};


#endif //UNTITLED2_SCREEN_UPDATER_H
