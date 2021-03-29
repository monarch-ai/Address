#include "contact.h"

void clearContact(AddressBooks* per)
{
	cout << "是否确认清空" << endl;
	cout << "1——是" << "\t" << "2——否" << endl;
	int confirm = 0;
	cin >> confirm;
	if (confirm == 1)
	{
		per->num = 0;
		cout << "清空成功！" << endl;
	}

	system("pause");
	system("cls");  //人数置零即可
}