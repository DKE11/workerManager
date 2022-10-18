#pragma once//防止头文件重复包含
#include<iostream>//包含输入输出流头文件
using namespace std;//使用标准命名空间

class WorkerManager  //声明WorkerManager管理类
{
public:
	//构造函数
	WorkerManager();
	//显示菜单函数
	void Show_Menu();

	//退出程序函数
	void ExitSystem();



	//析构函数
	~WorkerManager();

};

