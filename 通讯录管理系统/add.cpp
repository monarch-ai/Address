#include "contact.h"

void addContact(AddressBooks * per)
{
	if (per->num >= 1000)
	{
		cout << "通讯录已满，无法添加联系人";
	}
	else
	{
		cout << "请输入姓名" << endl;
		cin >> per->contactArray[per->num].name;

		cout << "请输入性别" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex; //要在循环内部，否则会死循环
			if (sex == 1 || sex == 2)
			{
				per->contactArray[per->num].gender = sex;
				break;  //跳出死循环
			}
			else
			{
				cout << "请输入性别" << endl;
			}
		}


		cout << "请输入年龄" << endl;
		cin >> per->contactArray[per->num].age;

		cout << "请输入电话" << endl;
		cin >> per->contactArray[per->num].tel;

		cout << "请输入住址" << endl;
		cin >> per->contactArray[per->num].address;

		per->num++;  //通讯录人数更新

		cout << "添加成功！" << endl;
		system("pause");
		system("cls");  //清空屏幕
	}



	
}