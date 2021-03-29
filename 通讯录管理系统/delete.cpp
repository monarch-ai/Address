#include "contact.h"

void deleteContact(AddressBooks* per)
{
	string name;
	cout << "请输入删除联系人的姓名" << endl;
	cin >> name;

	int flag=isExist(per, name);
	if (flag != -1)
	{
		for (int i = flag; i < per->num; i++)
		{
			per->contactArray[i] = per->contactArray[i + 1];
		}
		per->num--;  //忘记这个后显示会出现错误
	}
	else
	{
		cout << "该联系人不存在" << endl;
	}

	system("pause");
	system("cls");
}