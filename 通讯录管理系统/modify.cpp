#include "contact.h"

void modifyContact(AddressBooks* per)
{
	string name;
	cout << "请输入需要修改的联系人的姓名" << endl;
	cin >> name;

	int flag = isExist(per, name);
	if (flag != -1)
	{
		cout << "请输入姓名" << endl;
		cin >> per->contactArray[flag].name;

		cout << "请输入性别" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex; //要在循环内部，否则会死循环
			if (sex == 1 || sex == 2)
			{
				per->contactArray[flag].gender = sex;
				break;  //跳出死循环
			}
			else
			{
				cout << "请输入性别" << endl;
			}
		}


		cout << "请输入年龄" << endl;
		cin >> per->contactArray[flag].age;

		cout << "请输入电话" << endl;
		cin >> per->contactArray[flag].tel;

		cout << "请输入住址" << endl;
		cin >> per->contactArray[flag].address;

		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "该联系人不存在" << endl;
	}

	system("pause");
	system("cls");
}