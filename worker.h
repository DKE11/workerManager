#pragma once
#include<iostream>
#include<string>
using namespace std;

//抽象基类：职工类
class Worker
{
public:
	//显示个人信息
	virtual void showInfo() = 0;//1、纯虚函数--virtual，2、子类可以重写该函数，3、只声明不实现

	//获取岗位名称
	virtual string getDeptName() = 0;

	int m_Id;//职工编号

	string m_Name;//职工姓名

	int m_DeptId;//所在部门编号
};
