//
// Created by gaoxl85 on 2024/9/25.
//

#ifndef EMPLOYER_SYSTEM_WORKERMANAGER_H
#define EMPLOYER_SYSTEM_WORKERMANAGER_H

#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

class WorkerManager {
public:
    int m_EmpNum;

    Worker **m_EmpArray;

    WorkerManager();

    ~WorkerManager();

    static void showMenu();

    void exitSystem();

    void add_Emp();

};


#endif //EMPLOYER_SYSTEM_WORKERMANAGER_H
