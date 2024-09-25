//
// Created by gaoxl85 on 2024/9/25.
//

#ifndef EMPLOYER_SYSTEM_WORKER_H
#define EMPLOYER_SYSTEM_WORKER_H

#include <iostream>

using namespace std;

class Worker {
public:
    int m_Id;
    string m_Name;
    int m_DeptId;

    virtual void showInfo() = 0;

    virtual string getDeptName() = 0;

    virtual ~Worker() {};

};


#endif //EMPLOYER_SYSTEM_WORKER_H
