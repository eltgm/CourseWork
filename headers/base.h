//
// Created by Ильдар on 23.12.2018.
//

#ifndef UNTITLED2_BASE_H
#define UNTITLED2_BASE_H

#include <iostream>

#include <string>

#include <vector>

using namespace std;

class base {
public:
    base();

    void set_object_name(string object_name);

    string get_object_name();

private:
    string object_name; // наименование объекта
};


#endif //UNTITLED2_BASE_H
