#include "contact.h"

void findContact(AddressBooks* per)
{
	string name;
	cout << "�����������ϵ�˵�����" << endl;
	cin >> name;

	int flag = isExist(per, name);
	if (flag != -1)
	{
		int i = flag;
		cout << "������" << per->contactArray[i].name << "\t"
			<< "�Ա�" << (per->contactArray[i].gender == 1 ? "��" : "Ů") << "\t"
			<< "���䣺" << per->contactArray[i].age << "\t"
			<< "�绰��" << per->contactArray[i].tel << "\t"  //����\�Ĵ���
			<< "סַ��" << per->contactArray[i].address << endl;
	}
	else
	{
		cout << "����ϵ�˲�����" << endl;
	}

	system("pause");
	system("cls");
}