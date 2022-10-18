#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	//测试代码
	Worker* wor = NULL;

	wor = new Employee(1, "张三", 1);
	wor->showInfo();
	delete wor;//释放Employee空间（自动调用Employ析构函数），wor指向这一块内存空间
	
	wor = new Manager(2, "李四", 2);
	wor->showInfo();
	delete wor;

	wor = new Boss(3, "王五", 3);
	wor->showInfo();
	delete wor;

	//实例化管理类对象
	//WorkerManager wm;

	////调用显示菜单成员函数
	////wm.Show_Menu();

	//while (true)
	//{
	//	wm.Show_Menu();//菜单调用
	//	int select = 0;
	//	cout << "请输入你的选择：" << endl;
	//	cin >> select;//获取用户选择

	//	switch (select)
	//	{
	//	case 0:wm.ExitSystem();    //退出系统
	//		break;
	//	case 1:                    //添加职工信息
	//		                       //利用地址传递，可以修饰实参
	//		break;
	//	case 2:                    //显示职工信息
	//		
	//		break;
	//	case 3:                    //删除离职职工
	//		
	//		
	//		break;
	//	case 4:                    //查找职工信息
	//		
	//		break;
	//	case 5:                    //修改职工信息
	//		
	//		break;
	//	case 6:                    //排序职工

	//		break;
	//	case 7:                    //清空所有文件
	//		break;
	//	default:
	//		break;
	//	}
	//}
	system("pause");

	return 0;
}