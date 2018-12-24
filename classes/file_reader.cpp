//
// Created by ������ on 23.12.2018.
//

#include "../headers/file_reader.h"

vector<string> file_reader::get_strings() {
    vector<string> strings;
    ifstream fin(FILE_PATH); // (����� �� ���������� ��� �����)
    string buff;

    if (!fin.is_open()) // ���� ���� �� ������
        cout << "\n\n���� �� ����� ���� ������!\n"; // �������� �� ����
    else {
        while (getline(fin, buff, ',')) {
            if (buff.at(0) == ' ')
                buff.erase(0, 1);
            strings.push_back(buff);
        }

        fin.close(); // ��������� ����

    }

    return strings;
}
