#pragma once
#include<iostream>
#include<string>
using namespace std;

//������ְࣺ����
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;//1�����麯��--virtual��2�����������д�ú�����3��ֻ������ʵ��

	//��ȡ��λ����
	virtual string getDeptName() = 0;

	int m_Id;//ְ�����

	string m_Name;//ְ������

	int m_DeptId;//���ڲ��ű��
};
