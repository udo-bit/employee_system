//
// Created by gaoxl85 on 2024/9/25.
//

#include "WorkerManager.h"
#include <iostream>

using namespace std;

WorkerManager::WorkerManager() {
    this->m_EmpNum = 0;
    this->m_EmpArray = nullptr;

}

WorkerManager::~WorkerManager() = default;

void WorkerManager::showMenu() {
    {
        cout << "********************************************" << endl;
        cout << "*********  欢迎使用职工管理系统！ **********" << endl;
        cout << "*************  0.退出管理程序  *************" << endl;
        cout << "*************  1.增加职工信息  *************" << endl;
        cout << "*************  2.显示职工信息  *************" << endl;
        cout << "*************  3.删除离职职工  *************" << endl;
        cout << "*************  4.修改职工信息  *************" << endl;
        cout << "*************  5.查找职工信息  *************" << endl;
        cout << "*************  6.按照编号排序  *************" << endl;
        cout << "*************  7.清空所有文档  *************" << endl;
        cout << "********************************************" << endl;
        cout << endl;
    }
}

void WorkerManager::exitSystem() {
    cout << "欢迎下次使用" << endl;
    system("read -p 'Press Enter to continue...' var");
    exit(0);

}

void WorkerManager::add_Emp() {
    cout << "请输入要添加的员工人数：" << endl;
    int addNum = 0;
    cin >> addNum;
    if (addNum > 0) {
        int newSize = addNum + m_EmpNum;
        // 创建新的指针数组指针
        auto **newSpace = new Worker *[newSize];
        // 如果原先不为空，复制
        if (m_EmpArray != nullptr) {
            for (int i = 0; i < m_EmpNum; i++) {
                newSpace[i] = m_EmpArray[i];
            }
        }
        // 追加新数据
        for (int i = 0; i < addNum; ++i) {
            int id;
            string name;
            int dSelect;

            cout << "请输入第" << i + 1 << "个新员工编号：" << endl;
            cin >> id;

            cout << "请输入第" << i + 1 << "个新员工姓名：" << endl;
            cin >> name;

            cout << "请选择第" << i + 1 << "个新员工岗位：" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> dSelect;

            Worker *worker = nullptr;
            switch (dSelect) {
                case 1:
                    worker = new Employee(id, name, 1);
                    break;
                case 2:
                    worker = new Manager(id, name, 2);
                    break;
                case 3:
                    worker = new Boss(id, name, 3);
                    break;
                default:
                    break;
            }
            newSpace[m_EmpNum + i] = worker;
        }
        // 请空原先的空间
        delete[] this->m_EmpArray;
        this->m_EmpArray = newSpace;
        this->m_EmpNum = newSize;
        cout << "成功添加了" << addNum << "名新职工！" << endl;
    } else {
        cout << "输入有误" << endl;
    }
    system("read -p 'Press Enter to continue...' var");
    system("clear");


}
