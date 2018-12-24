//
// Created by Ильдар on 23.12.2018.
//

#ifndef UNTITLED2_FILE_READER_H
#define UNTITLED2_FILE_READER_H


#include "base.h"
#include <fstream>

class file_reader : public base {
public:
    const string FILE_PATH = "strings.txt";

    vector<string> get_strings();
};


#endif //UNTITLED2_FILE_READER_H
