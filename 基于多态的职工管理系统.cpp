#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	//���Դ���
	Worker* wor = NULL;

	wor = new Employee(1, "����", 1);
	wor->showInfo();
	delete wor;//�ͷ�Employee�ռ䣨�Զ�����Employ������������worָ����һ���ڴ�ռ�
	
	wor = new Manager(2, "����", 2);
	wor->showInfo();
	delete wor;

	wor = new Boss(3, "����", 3);
	wor->showInfo();
	delete wor;

	//ʵ�������������
	//WorkerManager wm;

	////������ʾ�˵���Ա����
	////wm.Show_Menu();

	//while (true)
	//{
	//	wm.Show_Menu();//�˵�����
	//	int select = 0;
	//	cout << "���������ѡ��" << endl;
	//	cin >> select;//��ȡ�û�ѡ��

	//	switch (select)
	//	{
	//	case 0:wm.ExitSystem();    //�˳�ϵͳ
	//		break;
	//	case 1:                    //���ְ����Ϣ
	//		                       //���õ�ַ���ݣ���������ʵ��
	//		break;
	//	case 2:                    //��ʾְ����Ϣ
	//		
	//		break;
	//	case 3:                    //ɾ����ְְ��
	//		
	//		
	//		break;
	//	case 4:                    //����ְ����Ϣ
	//		
	//		break;
	//	case 5:                    //�޸�ְ����Ϣ
	//		
	//		break;
	//	case 6:                    //����ְ��

	//		break;
	//	case 7:                    //��������ļ�
	//		break;
	//	default:
	//		break;
	//	}
	//}
	system("pause");

	return 0;
}