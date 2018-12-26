//
// Created by Ильдар on 23.12.2018.
//

#ifndef UNTITLED2_APPLICATION_H
#define UNTITLED2_APPLICATION_H


#include "base.h"
#include "game.h"
#include "screen.h"

class application : public base {
public:
    application();

    void build_tree_utilities();

    int start_game();

    bool is_number(const std::string &s);
private:
    game game;

    screen screen_updater;
};


#endif //UNTITLED2_APPLICATION_H
