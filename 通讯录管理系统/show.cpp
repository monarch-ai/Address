#include "contact.h"

void showContact(AddressBooks* per)
{
	if (per->num!=0)
	{
		for (int i = 0; i < per->num; i++)
		{
			cout << "������" << per->contactArray[i].name << "\t"
				<< "�Ա�" << (per->contactArray[i].gender==1?"��":"Ů") << "\t"
				<< "���䣺" << per->contactArray[i].age << "\t"
				<< "�绰��" << per->contactArray[i].tel << "\t"  //����\�Ĵ���
				<< "סַ��" << per->contactArray[i].address << endl;
		}
	}
	else
	{
		cout << "ͨѶ¼������ϵ��" << endl;
	}

	system("pause");
	system("cls");
	
}