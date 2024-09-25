//
// Created by gaoxl85 on 2024/9/25.
//

#ifndef EMPLOYER_SYSTEM_MANAGER_H
#define EMPLOYER_SYSTEM_MANAGER_H

#include <string>

using namespace std;

#include "Worker.h"


class Manager : public Worker {
public:
    Manager(int id, const string &name, int dId);

    void showInfo() override;

    string getDeptName() override;

};


#endif //EMPLOYER_SYSTEM_MANAGER_H
