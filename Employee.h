//
// Created by gaoxl85 on 2024/9/25.
//

#ifndef EMPLOYER_SYSTEM_EMPLOYEE_H
#define EMPLOYER_SYSTEM_EMPLOYEE_H


#include "Worker.h"

class Employee : public Worker {
public:
    Employee(int id, const string &name, int dId);

    
    void showInfo() override;

    string getDeptName() override;

};


#endif //EMPLOYER_SYSTEM_EMPLOYEE_H
