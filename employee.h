#pragma once
#include<iostream>
#include<string>
using namespace std;

#include "worker.h"

//职工类
class Employee :public Worker
{
public:
	//构造函数
	Employee(int id,string name,int did);
	//显示个人信息
	void showInfo();//1、纯虚函数--virtual，2、子类可以重写该函数，3、只声明不实现

	//获取岗位名称
	string getDeptName();
};