//
// Created by Ильдар on 23.12.2018.
//

#include "../headers/file_reader.h"

vector<string> file_reader::get_strings() {
    vector<string> strings;
    ifstream fin(FILE_PATH); // (ВВЕЛИ НЕ КОРРЕКТНОЕ ИМЯ ФАЙЛА)
    string buff;

    if (!fin.is_open()) // если файл не открыт
        cout << "\n\nФайл не может быть открыт!\n"; // сообщить об этом
    else {
        while (getline(fin, buff, ',')) {
            if (buff.at(0) == ' ')
                buff.erase(0, 1);
            strings.push_back(buff);
        }

        fin.close(); // закрываем файл

    }

    return strings;
}
