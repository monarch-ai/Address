#include "contact.h"

void clearContact(AddressBooks* per)
{
	cout << "�Ƿ�ȷ�����" << endl;
	cout << "1������" << "\t" << "2������" << endl;
	int confirm = 0;
	cin >> confirm;
	if (confirm == 1)
	{
		per->num = 0;
		cout << "��ճɹ���" << endl;
	}

	system("pause");
	system("cls");  //�������㼴��
}