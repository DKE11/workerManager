#include"employee.h"

Employee::Employee(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

//��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\tְ����λ���ƣ�" << this->getDeptName()
		<< "\tְ��ְ����ɾ�������������" << endl;
}

//��ȡ��λ����
string Employee::getDeptName()
{
	return (string("Ա��"));
}