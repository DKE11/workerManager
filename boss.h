#pragma once
#include<iostream>
#include<string>
using namespace std;

#include "worker.h"

//�ϰ���
class Boss :public Worker
{
public:
	Boss(int id, string name, int did);
	//��ʾ������Ϣ
	void showInfo();

	//��ȡ��λ����
	string getDeptName();
};