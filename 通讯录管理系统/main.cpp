#include<iostream>
using namespace std;
#include <string>
#include "contact.h"



int main() //������˺þõ�bug,�����mainд����mian
{
	

	int select;
	AddressBooks con;
	con.num = 0;

	while (true)  //ע��������true
	{
		menuShow();  //�˵�չʾ

		cin >> select;

		switch (select)
		{
		case 1:  //�����ϵ��
		 	addContact(&con); break;  //��Ҫ�ı�conֵ����ַ����
		case 2:  //��ʾ��ϵ��
			showContact(&con); break;
		case 3:  //ɾ����ϵ��
			deleteContact(&con); break;
		case 4:  //������ϵ��
			findContact(&con); break;
		case 5:  //�޸���ϵ��
			modifyContact(&con); break;
		case 6:  //�����ϵ��
			clearContact(&con); break;
		case 0:  //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��ͨѶ¼" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
		
	}
	
	cout << "��ӭ�´�ʹ��ͨѶ¼" << endl;
	
	system("pause");
	return 0;
}