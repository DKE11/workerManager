#pragma once
#include<iostream>
#include<string>
using namespace std;

#include "worker.h"

//ְ����
class Employee :public Worker
{
public:
	//���캯��
	Employee(int id,string name,int did);
	//��ʾ������Ϣ
	void showInfo();//1�����麯��--virtual��2�����������д�ú�����3��ֻ������ʵ��

	//��ȡ��λ����
	string getDeptName();
};