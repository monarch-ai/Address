#include "contact.h"

void modifyContact(AddressBooks* per)
{
	string name;
	cout << "��������Ҫ�޸ĵ���ϵ�˵�����" << endl;
	cin >> name;

	int flag = isExist(per, name);
	if (flag != -1)
	{
		cout << "����������" << endl;
		cin >> per->contactArray[flag].name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex; //Ҫ��ѭ���ڲ����������ѭ��
			if (sex == 1 || sex == 2)
			{
				per->contactArray[flag].gender = sex;
				break;  //������ѭ��
			}
			else
			{
				cout << "�������Ա�" << endl;
			}
		}


		cout << "����������" << endl;
		cin >> per->contactArray[flag].age;

		cout << "������绰" << endl;
		cin >> per->contactArray[flag].tel;

		cout << "������סַ" << endl;
		cin >> per->contactArray[flag].address;

		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "����ϵ�˲�����" << endl;
	}

	system("pause");
	system("cls");
}