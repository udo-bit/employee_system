//
// Created by gaoxl85 on 2024/9/25.
//

#include "Manager.h"

Manager::Manager(int id, const string &name, int dId) {
    this->m_Name = name;
    this->m_Id = id;
    this->m_DeptId = dId;
}

void Manager::showInfo() {
    cout << "职工编号： " << this->m_Id
         << " \t职工姓名： " << this->m_Name
         << " \t岗位：" << this->getDeptName()
         << " \t岗位职责：完成老板交给的任务,并下发任务给员工" << endl;

}

string Manager::getDeptName() {
    return {"经理"};
}
