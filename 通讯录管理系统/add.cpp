#include "contact.h"

void addContact(AddressBooks * per)
{
	if (per->num >= 1000)
	{
		cout << "ͨѶ¼�������޷������ϵ��";
	}
	else
	{
		cout << "����������" << endl;
		cin >> per->contactArray[per->num].name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex; //Ҫ��ѭ���ڲ����������ѭ��
			if (sex == 1 || sex == 2)
			{
				per->contactArray[per->num].gender = sex;
				break;  //������ѭ��
			}
			else
			{
				cout << "�������Ա�" << endl;
			}
		}


		cout << "����������" << endl;
		cin >> per->contactArray[per->num].age;

		cout << "������绰" << endl;
		cin >> per->contactArray[per->num].tel;

		cout << "������סַ" << endl;
		cin >> per->contactArray[per->num].address;

		per->num++;  //ͨѶ¼��������

		cout << "��ӳɹ���" << endl;
		system("pause");
		system("cls");  //�����Ļ
	}



	
}