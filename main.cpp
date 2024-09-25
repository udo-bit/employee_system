#include <iostream>

using namespace std;

#include "WorkerManager.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

void test() {
    Worker *worker = nullptr;
    worker = new Employee(1, "张三", 1);
    worker->showInfo();
    delete worker;

    worker = new Manager(2, "李四", 2);
    worker->showInfo();
    delete worker;

    worker = new Boss(3, "王五", 3);
    worker->showInfo();
    delete worker;
}

int main() {

    WorkerManager wm;
    int choice = 0;
    while (true) {
        wm.showMenu();
        cout << "请输入您的选择：" << endl;
        cin >> choice;
        switch (choice) {
            case 0: //退出系统
                wm.exitSystem();
                break;
            case 1: //添加职工
                wm.add_Emp();
                break;
            case 2: //显示职工
                break;
            case 3: //删除职工
                break;
            case 4: //修改职工
                break;
            case 5: //查找职工
                break;
            case 6: //排序职工
                break;
            case 7: //清空文件
                break;
            default:
                system("cls");
                break;
        }
    }


    return 0;
}
