#include "contact.h"

void deleteContact(AddressBooks* per)
{
	string name;
	cout << "������ɾ����ϵ�˵�����" << endl;
	cin >> name;

	int flag=isExist(per, name);
	if (flag != -1)
	{
		for (int i = flag; i < per->num; i++)
		{
			per->contactArray[i] = per->contactArray[i + 1];
		}
		per->num--;  //�����������ʾ����ִ���
	}
	else
	{
		cout << "����ϵ�˲�����" << endl;
	}

	system("pause");
	system("cls");
}